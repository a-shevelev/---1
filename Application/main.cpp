#include <iostream>
#include <ctime>
#include <iomanip>
#include "matrix.h"

using namespace std;

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
    findMinElementInTriangle(matrix, N);
    return 0;
}
//kufxgdkjhf








