#include <iostream>

using namespace std;

class Rectangle {
private:
    double width, height;

public:
    // Constructor to initialize width and height
    Rectangle(double w = 1.0, double h = 1.0) : width(w), height(h) {
        cout << "Rectangle created with width " << width << " and height " << height << endl;
    }

    // Destructor to print a message when the rectangle object is destroyed
    ~Rectangle() {
        cout << "Rectangle destroyed" << endl;
    }

    // Member function to calculate and return the area
    double getArea() const {
        return width * height;
    }

    // Member function to calculate and return the perimeter
    double getPerimeter() const {
        return 2 * (width + height);
    }
};

int main() {
    Rectangle rect1(5, 3);  // Create a rectangle with width 5 and height 3

    cout << "Area of rect1: " << rect1.getArea() << endl;
    cout << "Perimeter of rect1: " << rect1.getPerimeter() << endl;

    return 0;
}
