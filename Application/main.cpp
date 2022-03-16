#include <iostream>
#include <ctime>
#include <iomanip>
#include "matrix.h"

#define MATRIX_SIZE 14


using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    srand(time(0));
    int** matrix = CreateMatrix(MATRIX_SIZE);
    PrintMatrix(matrix, MATRIX_SIZE);
    FindGreatestElementWithEvenNumInColumn(matrix, MATRIX_SIZE);
    FindRiseChainMinMaxInline(matrix, MATRIX_SIZE);
    FindMinElementInTriangle(matrix, MATRIX_SIZE);
    return 0;
}







