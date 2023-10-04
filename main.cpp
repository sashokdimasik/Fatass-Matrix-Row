/*************************************
 * Author:       Platonov A.A.       *
 * Group:        ПИ-231              *
 * Variant:      14                  *
 * Date:         20.09.2023          *
 * Project name: Fatass Matrix Row   *
 * cpp.sh: https://shorturl.at/cGKLR *
 *************************************/

#include <iostream>

using namespace std;

int main() {
  int width, height;
  
  cout << "Enter width & height of the matrix C: ";
  cin >> width >> height;
  
  double **matrixC = new double*[width];
  
  cout << "Enter matrix C:\n";
  
  for (int row = 0; row < height; ++row) {
    matrixC[row] = new double[width];
    for (int column = 0; column < width; ++column) {
      cin >> matrixC[row][column];
    }
  }
  
  double sumCurr, sumMax = 0;
  int rowMax = 1;
  
  for (int row = 0; row < height; ++row) {
    sumCurr = 0;
    for (int column = 0; column < width; ++column) {
      sumCurr += matrixC[row][column];
    }
    if (sumCurr > sumMax) {
      sumMax = sumCurr;
      rowMax = row;
    }
  }
  
  cout << "Matrix C:\n";
  for (int row = 0; row < height; ++row) {
    for (int column = 0; column < width; ++column) {
      cout << matrixC[row][column] << ' ';
    }
    cout << '\n';
  }
  
  cout << "Row with max sum:\n";
  
  for (int column = 0; column < width; ++column) {
    cout << matrixC[rowMax][column] << ' ';
  }
  
  cout << "\nSum = " << sumMax << '\n';
  
  return 0;
}
