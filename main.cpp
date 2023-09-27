/*************************************
 * Author:       Platonov A.A.       *
 * Group:        ПИ-231              *
 * Variant:      14                  *
 * Date:         20.09.2023          *
 * Project name: Fatass Matrix Row   *
 * cpp.sh: https://shorturl.at/cemGN *
 *************************************/

#include <iostream>

using namespace std;

int main() {
  int width, height;
  
  cout << "Enter width & height of the matrix C: ";
  cin >> width >> height;
  
  double **matrixC = new double*[width];
  
  cout << "Enter matrix C:\n";
  
  for (int i = 0; i < width; i++) {
    matrixC[i] = new double[height];
    for (int j = 0; j < height; j++) {
      cin >> matrixC[i][j];
    }
  }
  
  double sumCurr, sumMax = 0;
  int rowMax = 1;
  
  for (int i = 0; i < width; i++) {
    sumCurr = 0;
    for (int j = 0; j < height; j++) {
      sumCurr += matrixC[i][j];
    }
    if (sumCurr > sumMax) {
      sumMax = sumCurr;
      rowMax = i;
    }
  }
  
  cout << "Matrix C:\n";
  for (int i = 0; i < width; i++) {
    for (int j = 0; j < height; j++) {
      cout << matrixC[i][j] << ' ';
    }
    cout << '\n';
  }
  
  cout << "Row with max sum:\n";
  
  for (int i = 0; i < height; i++) {
    cout << matrixC[rowMax][i] << ' ';
  }
  
  cout << "\nSum = " << sumMax << '\n';
  
  return 0;
}
