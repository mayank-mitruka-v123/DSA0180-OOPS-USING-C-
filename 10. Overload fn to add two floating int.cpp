#include <iostream>
using namespace std;
int add(int a, int b) {
    return a + b;
}
double add(double a, double b) {
    return a + b;
}
int main() {
    int intSum = add(10, 20);
    cout << "Sum of integers: " << intSum << endl;
    double floatSum = add(3.14, 2.5);
    cout << "Sum of floating-point numbers: " << floatSum << endl;
    return 0;
}

