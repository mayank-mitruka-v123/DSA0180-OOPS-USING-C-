#include <iostream>
#include <stdexcept>
using namespace std;
int main() {
  try {
    try {
      int x = 100;
      int y = 0;
      int result = x / y;
      cout << "Division result: " << result << endl;
      throw runtime_error("Inner try block exception");
    } catch (const runtime_error& e) {
      cerr << "Inner catch block: " << e.what() << endl;
    }
    cout << "After inner try-catch block." << endl;
    throw out_of_range("Outer try block exception");
  } catch (const out_of_range& e) {
    cerr << "Outer catch block: " << e.what() << endl;
  }
  return 0;
}

