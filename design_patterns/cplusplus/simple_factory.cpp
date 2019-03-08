// Design pattern - simple factory
// g++ -std=c++11 -o simple_factory simple_factory.cpp
// g++ -std=c++1z -o simple_factory simple_factory.cpp
// Вы можете наладить производство гиперболоидов

#include <iostream>

// Фигура
class Figure {
  public:
    virtual int get_width() = 0;
    virtual int get_height() = 0;
};

// Прямоугольник
class Rectangle : public Figure {
  protected:
    int width;
    int height;
  public:
    Rectangle(int width, int height) {
      this->width = width;
      this->height = height;
    }
    ~Rectangle() {}
    int get_width() {
      return this->width;
    }
    int get_height() {
      return this->height;
    }
};

// Фабрика прямоугольников
class RectangleFactory {
  public:
    static Rectangle* makeRectangle(int width, int height) {
      return new Rectangle(width, height);
    }
};

int main() {
  Rectangle* rectangle = RectangleFactory::makeRectangle(1, 5);
  std::cout << rectangle->get_width() << std::endl;
  std::cout << rectangle->get_height() << std::endl;

  return 0;
}

// 1
// 5
