#include <iostream>

using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    try {
        if (age < 18) {
            throw 18;
        }

        cout << "You are eligible to vote." << endl;
    }
    catch (int exc) {
        cerr << "Exception caught: You must be at least " << exc << " years old to vote." << endl;
    }

    return 0;
}

