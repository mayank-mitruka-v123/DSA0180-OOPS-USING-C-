#include <iostream>
#include <stdexcept>
using namespace std;
int main() {
    try {
        int x = 100;
        int y = 0;
        if (y == 0) {
            throw runtime_error("Division by zero!");
        }
        int result = x / y;
        cout << "Division result: " << result << endl;
        int array[5] = {1, 2, 3, 4, 5};
        int index = 10;
        cout << "Array element: " << array[index] << endl;
    }
    catch (const runtime_error& e) {
        cerr << "Runtime error: " << e.what() << endl;
    }
    catch (const out_of_range& e) {
        cerr << "Out of range error: " << e.what() << endl;
    }
    catch (...) {
        cerr << "Unknown exception caught!" << endl;
    }
    cout << "Program continues..." << endl;
    return 0;
}

