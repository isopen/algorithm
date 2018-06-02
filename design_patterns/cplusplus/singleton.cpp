// g++ -std=c++11 -o singleton singleton.cpp
class Singleton {
  public:
    static Singleton* Instance() {
      static Singleton singletonInstance;
      return &singletonInstance;
    }
  private:
    Singleton() {};
    Singleton(const Singleton& root) = delete;
    Singleton& operator=(const Singleton&) = delete;
};

int main() {
  Singleton::Instance();
  return 0;
}
