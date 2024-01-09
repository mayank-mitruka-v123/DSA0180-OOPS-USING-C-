#include <iostream>
using namespace std;
class Array {
private:
    int arr[10];

public:
    int& operator[](int index) {
        if (index >= 0 && index < 10) {
            return arr[index];
        } else {
            cerr << "Error: Index out of bounds." << endl;
            exit(1);
        }
    }

    const int& operator[](int index) const {
        if (index >= 0 && index < 10) {
            return arr[index];
        } else {
            cerr << "Error: Index out of bounds." << endl;
            exit(1);
        }
    }
};

int main() {
    Array myArray;
    for (int i = 0; i < 10; i++) {
        myArray[i] = i * 2;
    }
    for (int i = 0; i < 10; i++) {
        cout << myArray[i] << " ";
    }
    cout << endl;
    try {
        int value = myArray[15];
    } catch (...) {
        cout << "Error caught: Index out of bounds." << endl;
    }

    return 0;
}

