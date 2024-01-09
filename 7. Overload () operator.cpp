#include <iostream>

using namespace std;

class Multiplier {
public:
    int operator()(int x, int y) {
        return x * y;
    }
};

int main() {
    Multiplier multiplier; 
    int result = multiplier(5, 3);
    cout << "The result of 5 * 3 is: " << result << endl;
    return 0;
}

