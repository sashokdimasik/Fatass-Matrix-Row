/***********************************
 * Author:       Platonov A.A.     *
 * Group:        ПИ-231            *
 * Variant:      14                *
 * Date:         13.09.2023        *
 * Project name: Fatass Matrix Row *
 ***********************************/

#include <iostream>

int main()
{
  int width, height;
  
  std::cout << "Enter width & height of the matrix C: ";
  std::cin >> width >> height;
  
  double **matrixC = new double*[width];
  
  std::cout << "Enter matrix C:\n";
  
  for (int i = 0; i < width; i++) {
    matrixC[i] = new double[height];
    for (int j = 0; j < height; j++) {
      std::cin >> matrixC[i][j];
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
  
  std::cout << "Matrix C:\n";
  for (int i = 0; i < width; i++) {
    for (int j = 0; j < height; j++) {
      std::cout << matrixC[i][j] << ' ';
    }
    std::cout << '\n';
  }
  
  std::cout << "Row with max sum:\n";
  
  for (int i = 0; i < height; i++) {
    std::cout << matrixC[rowMax][i] << ' ';
  }
  
  std::cout << "\nSum = " << sumMax << '\n';
  
  return 0;
}
