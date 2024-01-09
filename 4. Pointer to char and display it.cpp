#include <iostream>

using namespace std;

int main() {
   char initial = 'A';
   char *ptr = &initial;
   cout << "Value of initial: " << initial << endl;
   cout << "Address of initial: " << &initial << endl;
   cout << "Value of ptr (address of initial): " << ptr << endl;
   cout << "Value stored at the address pointed to by ptr: " << *ptr << endl;

   return 0;
}

