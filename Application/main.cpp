#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
#include "matrix.h"


int main()
{
    setlocale(LC_ALL, "RUS");
    srand(time(0));
    int N{};
    cout << "Введите количество строк и столбцов: ";
    cin >> N;
    int** matrix = createMatrix(N);
    printMatrix(matrix, N);
    findGreatestElementWithEvenNumInColumn(matrix, N);
    afon_postaralsya(matrix, N);
    findMinElementInTriangle(matrix, N);
    return 0;
}







