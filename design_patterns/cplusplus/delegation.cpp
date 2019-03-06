// Design pattern - delegation
// g++ -std=c++11 -o delegation delegation.cpp
// g++ -std=c++1z -o delegation delegation.cpp
// Вы можете добавить сотрудника и перенаправить делегирование
// Вы можете добавить сотрудникам возможности делегирования
// Вы можете добавить возможность делегирования на себя
// Не исключино, что в результате получатся вечно циркулирующие таски

#include <iostream>

class Tasks {
  public:
    virtual void first_task() = 0;
    virtual void second_task() = 0;
};

class Coder : public Tasks {
  void first_task() {
    std::cout << "Coder -> first_task()" << std::endl;
  }
  void second_task() {
    std::cout << "Coder -> second_task()" << std::endl;
  }
};

class Developer : public Tasks {
  void first_task() {
    std::cout << "Developer -> first_task()" << std::endl;
  }
  void second_task() {
    std::cout << "Developer -> second_task()" << std::endl;
  }
};

class Techlead : public Tasks {
  public:
    Techlead() : m_i (new Coder()) {}
    virtual ~Techlead() {
      delete m_i;
    }
    void first_task() {
      m_i->first_task();
    }
    void second_task() {
      m_i->second_task();
    }
    void toCoder() {
      delete m_i;
      m_i = new Coder();
    }
    void toDeveloper() {
      delete m_i;
      m_i = new Developer();
    }
  private:
    Tasks * m_i;
};

class Teamlead : public Tasks {
  public:
    Teamlead() : m_i (new Techlead()) {}
    virtual ~Teamlead() {
      delete m_i;
    }
    void first_task() {
      m_i->first_task();
    }
    void second_task() {
      m_i->second_task();
    }
    void toTechlead() {
      delete m_i;
      m_i = new Techlead();
    }
    void toCoder() {
      delete m_i;
      m_i = new Coder();
    }
    void toDeveloper() {
      delete m_i;
      m_i = new Developer();
    }
  private:
    Tasks * m_i;
};

int main() {
  Teamlead teamlead;
  teamlead.first_task();
  teamlead.second_task();
  Techlead techlead;
  techlead.toDeveloper();
  techlead.second_task();

  return 0;
}

// Coder -> first_task()
// Coder -> second_task()
// Developer -> second_task()
