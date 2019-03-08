// Design pattern - builder
// g++ -std=c++11 -o builder builder.cpp
// g++ -std=c++1z -o builder builder.cpp

#include <iostream>
#include <vector>

// Типы городов
class Castle {
  public:
    void info() {
      std::cout << "Castle" << std::endl;
    }
};

class Rampart {
  public:
    void info() {
      std::cout << "Rampart" << std::endl;
    }
};

class Dungeon {
  public:
    void info() {
      std::cout << "Dungeon" << std::endl;
    }
};

// Страна, содержит все типы городов
class Country {
  public:
    std::vector<Castle> vcastle;
    std::vector<Rampart> vrampart;
    std::vector<Dungeon> vdungeon;
    void info() {
      int i;
      for (i = 0; i < vcastle.size(); ++i) {
        vcastle[i].info();
      }
      for (i = 0; i < vrampart.size(); ++i) {
        vrampart[i].info();
      }
      for (i = 0; i < vdungeon.size(); ++i) {
        vdungeon[i].info();
      }
    }
};

// Строитель страны
class CountryBuilder {
  protected:
    Country* country;
  public:
    CountryBuilder(): country(0) {}
    virtual ~CountryBuilder() {}
    virtual void createCountry() {}
    virtual void buildCastle() {}
    virtual void buildRampart() {}
    virtual void buildDungeon() {}
    virtual Country* getCountry() {
      return country;
    }
};

// Строитель "Атлантида"
class AtlantisBuilder: public CountryBuilder {
  public:
    void createCountry() {
      this->country = new Country;
    }
    void buildCastle() {
      this->country->vcastle.push_back(
        Castle()
      );
    }
    void buildDungeon() {
      this->country->vdungeon.push_back(
        Dungeon()
      );
    }
};

// Строитель "Офир"
class OphirBuilder: public CountryBuilder {
  public:
    void createCountry() {
      this->country = new Country;
    }
    void buildCastle() {
      this->country->vcastle.push_back(
        Castle()
      );
    }
    void buildRampart() {
      this->country->vrampart.push_back(
        Rampart()
      );
    }
};

// Распределитель
class Supervisor {
  public:
    Country* createCountry(
      CountryBuilder& builder
    ) {
        builder.createCountry();
        builder.buildCastle();
        builder.buildRampart();
        builder.buildDungeon();
        return builder.getCountry();
    }
};

int main() {
  Supervisor supervisor;
  AtlantisBuilder atlantis_builder;
  OphirBuilder ophir_builder;
  Country* atlantis = supervisor.createCountry(atlantis_builder);
  Country* ophir = supervisor.createCountry(ophir_builder);
  std::cout << "Atlantis country:" << std::endl;
  atlantis->info();
  std::cout << "Ophir country:" << std::endl;
  ophir->info();

  return 0;
}

// Atlantis country:
// Castle
// Dungeon
// Ophir country:
// Castle
// Rampart
