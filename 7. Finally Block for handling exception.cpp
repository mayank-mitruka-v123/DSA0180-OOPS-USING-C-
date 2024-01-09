#include <iostream>
#include <fstream>

using namespace std;

class FileCloser {
public:
    FileCloser(ifstream& file) : file(file) {}
    ~FileCloser() { 
        cout << "File closed (via destructor).\n"; 
        file.close(); 
    }
private:
    ifstream& file;
};

int main() {
    ifstream inputFile("data.txt");
    FileCloser closer(inputFile);

    try {
        throw runtime_error("Simulated exception");
    }
    catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }
    return 0;
}

