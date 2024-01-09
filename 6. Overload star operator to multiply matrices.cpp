#include <iostream>
#include <vector>

using namespace std;

class Matrix {
public:
   vector<vector<int>> data;
   int rows, cols;

   Matrix(const vector<vector<int>>& data) : data(data), rows(data.size()), cols(data[0].size()) {}
   Matrix operator*(const Matrix& other) const {
       if (cols != other.rows) {
           throw runtime_error("Incompatible matrix dimensions for multiplication");
       }

       Matrix result(rows, other.cols);
       for (int i = 0; i < rows; i++) {
           for (int j = 0; j < other.cols; j++) {
               int sum = 0;
               for (int k = 0; k < cols; k++) {
                   sum += data[i][k] * other.data[k][j];
               }
               result.data[i][j] = sum;
           }
       }
       return result;
   }
   void print() const {
       for (int i = 0; i < rows; i++) {
           for (int j = 0; j < cols; j++) {
               cout << data[i][j] << " ";
           }
           cout << endl;
       }
   }
};

int main() {
   vector<vector<int>> matrix1 = {{1, 2, 3}, {4, 5, 6}};
   vector<vector<int>> matrix2 = {{7, 8}, {9, 10}, {11, 12}};

   Matrix m1(matrix1);
   Matrix m2(matrix2);

   try {
       Matrix result = m1 * m2;
       cout << "Matrix 1:\n";
       m1.print();
       cout << "Matrix 2:\n";
       m2.print();
       cout << "Result of multiplication:\n";
       result.print();
   } catch (const runtime_error& e) {
       cerr << "Error: " << e.what() << endl;
   }

   return 0;
}

