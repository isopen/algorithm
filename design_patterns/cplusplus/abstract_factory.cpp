// Design pattern - abstract factory
// g++ -std=c++11 -o abstract_factory abstract_factory.cpp
// g++ -std=c++1z -o abstract_factory abstract_factory.cpp
// Вы можете создать батл
// Вы можете улучшить реализацию

#include <iostream>
#include <vector>

// Типы воинов
class Undead {
  public:
    virtual void info() = 0;
    virtual ~Undead() {}
};

class Mage {
  public:
    virtual void info() = 0;
    virtual ~Mage() {}
};

class Druid {
  public:
    virtual void info() = 0;
    virtual ~Druid() {}
};

// Воины орды
class HordeUndead : public Undead {
  public:
    void info() {
      std::cout << "I'am UndeadHorde" << std::endl;
    }
};

class HordeMage : public Mage {
  public:
    void info() {
      std::cout << "I'am MageHorde" << std::endl;
    }
};

class HordeDruid : public Druid {
  public:
    void info() {
      std::cout << "I'am DruidHorde" << std::endl;
    }
};

// Воины альянса
class AllianceUndead : public Undead {
  public:
    void info() {
      std::cout << "I'am UndeadAlliance" << std::endl;
    }
};

class AllianceMage : public Mage {
  public:
    void info() {
      std::cout << "I'am MageAlliance" << std::endl;
    }
};

class AllianceDruid : public Druid {
  public:
    void info() {
      std::cout << "I'am DruidAlliance" << std::endl;
    }
};

// Цитадель (абстрактная фабрика для производства воинов)
class CitadelFactory {
  public:
    virtual Undead* create_undead() = 0;
    virtual Mage* create_mage() = 0;
    virtual Druid* create_druid() = 0;
    virtual ~CitadelFactory() {}
};

// Башня орды (фабрика для создания воинов орды)
class HordeTowerFactory : public CitadelFactory {
  public:
    Undead* create_undead() {
      return new HordeUndead;
    }
    Mage* create_mage() {
      return new HordeMage;
    }
    Druid* create_druid() {
      return new HordeDruid;
    }
};

// Казарма альянса (фабрика для создания воинов альянса)
class AllianceBarracksFactory : public CitadelFactory {
  public:
    Undead* create_undead() {
      return new AllianceUndead;
    }
    Mage* create_mage() {
      return new AllianceMage;
    }
    Druid* create_druid() {
      return new AllianceDruid;
    }
};

// Хранилище всех воинов расы
class RaceStore {
  public:
    ~RaceStore() {
      for (size_t i = 0; i < undead.size(); ++i) {
        delete undead[i];
      }
      for (size_t i = 0; i < mage.size(); ++i) {
        delete mage[i];
      }
      for (size_t i = 0; i < druid.size(); ++i) {
        delete druid[i];
      }
    }
    void info() {
      for (size_t i = 0; i < undead.size(); ++i) {
        undead[i]->info();
      }
      for (size_t i = 0; i < mage.size(); ++i) {
        mage[i]->info();
      }
      for (size_t i = 0; i < druid.size(); ++i) {
        druid[i]->info();
      }
    }
    std::vector<Undead*> undead;
    std::vector<Mage*> mage;
    std::vector<Druid*> druid;
};

// Строитель расы
class RaceBuilder {
  public:
    RaceStore* create_race(CitadelFactory &factory) {
      RaceStore* race_store = new RaceStore;
      race_store->undead.push_back(factory.create_undead());
      race_store->mage.push_back(factory.create_mage());
      race_store->druid.push_back(factory.create_druid());
      return race_store;
    }
};

int main() {
  RaceBuilder race_builder;
  HordeTowerFactory horde_tower_factory;
  AllianceBarracksFactory alliance_barracks_factory;
  RaceStore* horde_store = race_builder.create_race(horde_tower_factory);
  RaceStore* alliance_store = race_builder.create_race(alliance_barracks_factory);
  std::cout << "Horde:" << std::endl;
  horde_store->info();
  std::cout << "Alliance:" << std::endl;
  alliance_store->info();
  return 0;
}

// Horde:
// I'am UndeadHorde
// I'am MageHorde
// I'am DruidHorde
// Alliance:
// I'am UndeadAlliance
// I'am MageAlliance
// I'am DruidAlliance
