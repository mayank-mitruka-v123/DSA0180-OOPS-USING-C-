#include <iostream>

using namespace std;

class Shape {
public:
   Shape(int height, int width) {
       this->height = height;
       this->width = width;
   }

   virtual int getArea() = 0;
   virtual int getPerimeter() = 0;

protected:
   int height;
   int width;
};

class Rectangle : public Shape {
public:
   Rectangle(int height, int width) : Shape(height, width) {}

   int getArea() override {
       return height * width;
   }

   int getPerimeter() override {
       return 2 * (height + width);
   }
};

class Triangle : public Shape {
public:
   Triangle(int height, int width, int base) : Shape(height, width), base(base) {}

   int getArea() override {
       return 0.5 * height * base;
   }

   int getPerimeter() override {
       return height + width + base;
   }

private:
   int base;
};

int main() {
   Rectangle rectangle(5, 10);
   Triangle triangle(8, 6, 10);

   cout << "Rectangle area: " << rectangle.getArea() << endl;
   cout << "Rectangle perimeter: " << rectangle.getPerimeter() << endl;
   cout << "Triangle area: " << triangle.getArea() << endl;
   cout << "Triangle perimeter: " << triangle.getPerimeter() << endl;

   return 0;
}

