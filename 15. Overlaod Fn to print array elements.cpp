#include <iostream>
using namespace std;
void printArray(const int arr[], int size) {
   cout << "Integer Array: ";
   for (int i = 0; i < size; i++) {
       cout << arr[i] << " ";
   }
   cout << endl;
}
void printArray(const double arr[], int size) {
   cout << "Double Array: ";
   for (int i = 0; i < size; i++) {
       cout << arr[i] << " ";
   }
   cout << endl;
}
void printArray(const char arr[], int size) {
   cout << "Character Array: ";
   for (int i = 0; i < size; i++) {
       cout << arr[i] << " ";
   }
   cout << endl;
}

int main() {
   int intArr[] = {1, 2, 3, 4, 5};
   double doubleArr[] = {3.14, 2.71, 1.61};
   char charArr[] = "Hello";

   int intSize = sizeof(intArr) / sizeof(intArr[0]);
   int doubleSize = sizeof(doubleArr) / sizeof(doubleArr[0]);
   int charSize = sizeof(charArr) / sizeof(charArr[0]) - 1;

   printArray(intArr, intSize);
   printArray(doubleArr, doubleSize);
   printArray(charArr, charSize);

   return 0;
}

