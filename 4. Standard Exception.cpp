#include <iostream>
#include <stdexcept>
using namespace std;
int main() {
    try {
        throw runtime_error("This is a runtime error!");
        throw logic_error("This is a logic error!");
        throw bad_alloc();
    }
    catch (const runtime_error& e) {
        cerr << "Runtime error: " << e.what() << endl;
    }
    catch (const logic_error& e) {
        cerr << "Logic error: " << e.what() << endl;
    }
    catch (const bad_alloc& e) {
        cerr << "Memory allocation failed!" << endl;
    }

    cout << "Program continues..." << endl;

    return 0;
}

