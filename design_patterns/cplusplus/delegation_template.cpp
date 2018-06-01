#include <iostream>

class A {
  public:
    virtual void s() = 0;
    virtual void g() = 0;
};

class B : public A {
  void s() {
    std::cout << "B -> f()" << std::endl;
  }
  void g() {
    std::cout << "B -> g()" << std::endl;
  }
};

class C : public A {
  public:
    C() : m_i (new B()) {}
    virtual ~C() {
      delete m_i;
    }
    void s() {
      m_i->f();
    }
    void g() {
      m_i->g();
    }
  private:
    A * m_i;
};

int main() {
  C c;
  c.s();
  c.g();

  return 0;
}
