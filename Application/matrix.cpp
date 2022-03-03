#include <iostream>
#include "matrix.h"
#include <iomanip>

using namespace std;

int** createMatrix(int N) {
    int** matrix = new int* [N] {};
    for (int i = 0; i < N; i++) {
        matrix[i] = new int [N] {};
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matrix[i][j] = rand() % 13 - 6;
        }
    }
    return matrix;
}

void printMatrix(int** matrix, int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << setw(5) << matrix[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

void findGreatestElementWithEvenNumInColumn(int** matrix, int N) {
    int max = -10;
    for (int i = 0; i < N; i++) {
        int max = -10;
        for (int j = 0; j < N; j++) {
            if ((matrix[j][i] > max) && ((j + 1) % 2 == 0)) {
                max = matrix[j][i];
            }
        }
        cout << setw(5) << max;
    }
    cout << endl;
}
void findMinElementInTriangle(int** matrix, int N) {
    int min = 10;
    for (int i = N / 2; i < N; i++) {
        for (int j = N - i - 1; j <= i; j++) {
            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
        }
    }
    cout << min;
}
/////////анрпрслпоод