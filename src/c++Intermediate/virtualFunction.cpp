// virtual function

#include <iostream>
using namespace std;

class Shape {

protected:
  double width, height;

public:
  void set_data(double a, double b) {

    width = a;
    height = b;
  }

  virtual double area()
  {return 0;}
};

class Rectangle: public Shape {
  public:
    double area() {
      return (width * height);
    }
};

int main(int argc, char const *argv[])
{
  Shape *sPtr;
  Rectangle Rect;
  sPtr = &Rect;

  sPtr -> set_data (5,3);
  cout << sPtr -> area() << endl;

  return 0;
}
