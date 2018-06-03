// Design pattern singleton
// cpu: intel i7 4-8
// g++ -std=c++11 -pthread -o singleton singleton.cpp
// g++ -std=c++1z -pthread -o singleton singleton.cpp
// принцип: "доверяй, но проверяй"
// Вы можете провести тестирование для асинхронных вызовов
// Вы можете дополнить реализацию

#include <iostream>
#include <chrono>
#include <future>
#include <mutex>
#include <atomic>
#include <thread>

const auto num_calls = 10000000;

//std::mutex t_mutex;

class Singleton {
  public:
    // доверяем c++11 (dev: 0.0300068, 0.0230015; -O3: 0.00330429, 0.00318313)
    static Singleton& get_instance() {
      static Singleton instance;
      return instance;
    }
    // не доверяем и делаем через mutex (dev: 0.320112, 0.316816; -O3: 0.186264, 0.186611)
    /*static Singleton& get_instance() {
      std::lock_guard<std::mutex> my_lock(t_mutex);
      if (!instance) {
        instance = new Singleton();
      }
      return *instance;
    }*/
    // не доверяем и делаем через [mutex + atomic] (dev: 0.082533, 0.0849388, 0.0818109; -O3: 0.00491502, 0.00438205, 0.00444708)
    /*static Singleton* get_instance() {
      Singleton* ptr_instance = instance.load();
      if (!ptr_instance) {
        std::lock_guard<std::mutex> my_lock(t_mutex);
        ptr_instance = instance.load();
        if (!ptr_instance) {
          ptr_instance = new Singleton();
          instance.store(ptr_instance);
        }
      }
    }*/
    // не доверяем и делаем через [mutex + atomic + (acquire-release)] (dev: 0.082792, 0.0833967; -O3: 0.0043722, 0.00444723)
    /*static Singleton* get_instance() {
      Singleton* ptr_instance = instance.load(std::memory_order_acquire);
      if (!ptr_instance) {
        std::lock_guard<std::mutex> my_lock(t_mutex);
        ptr_instance = instance.load(std::memory_order_relaxed);
        if (!ptr_instance) {
          ptr_instance = new Singleton();
          instance.store(ptr_instance, std::memory_order_release);
        }
      }
      return ptr_instance;
    }*/
  private:
    Singleton() = default;
    ~Singleton() = default;
    Singleton(const Singleton& root) = delete;
    Singleton& operator=(const Singleton&) = delete;
    //static Singleton* instance;
    static std::atomic<Singleton*> instance;
    static std::mutex t_mutex;
};

//Singleton* Singleton::instance = nullptr;
std::atomic<Singleton*> Singleton::instance;
std::mutex Singleton::t_mutex;

// делаем просто для текущего анализа. синхронный тест.
int main() {
  //constexpr auto test = num_calls * 8; // (dev: 0.178927, 0.17338; -O: 0.0315557, 0.0343075, 0.0365598)
  auto begin = std::chrono::system_clock::now();
  for (size_t i = 0; i <= num_calls; ++i) {
    Singleton::get_instance();
  }
  auto end = std::chrono::system_clock::now() - begin;
  std::cout << std::chrono::duration<double>(end).count() << std::endl;
  return 0;
}

// делаем сложно для текущего анализа. асинхронный тест.
/*std::chrono::duration<double> get_time() {
  auto begin = std::chrono::system_clock::now();
  for (size_t i = 0; i <= num_calls; ++i) {
    Singleton::get_instance();
  }
  return std::chrono::system_clock::now() - begin;
};

int main() {
  auto t = std::async(std::launch::async, get_time);
  auto t1 = std::async(std::launch::async, get_time);
  auto t2 = std::async(std::launch::async, get_time);
  auto t3 = std::async(std::launch::async, get_time);
  auto sum = t.get() + t1.get() + t2.get() + t3.get();
  std::cout << sum.count() << std::endl;
  return 0;
}*/
