#include <iostream>

using namespace std;
class Number {
private:
    int value;

public:
    Number(int val = 0) : value(val) {}
    Number& operator+=(const Number& other) {
        value += other.value;
        return *this;
    }
    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number num1(10);
    Number num2(5);
    num1 += num2;
    cout << "After addition: " << endl;
    num1.display();

    return 0;
}

