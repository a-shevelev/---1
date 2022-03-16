#pragma once
#include <iostream>
#include <iomanip>
#include "matrix.h"
#define RANDOM_MIN -6 
#define RANDOM_MAX 6 
using namespace std;

int** CreateMatrix(int MATRIX_SIZE) {
    int** matrix = new int* [MATRIX_SIZE] {};
    for (int i = 0; i < MATRIX_SIZE; i++) {
        matrix[i] = new int [MATRIX_SIZE] {}; 
    }
    for (int i = 0; i < MATRIX_SIZE; i++) {
        for (int j = 0; j < MATRIX_SIZE; j++) {
            matrix[i][j] = rand() % ((RANDOM_MAX - RANDOM_MIN)+1) + RANDOM_MIN;
        }
    }
    return matrix;
};
void PrintMatrix(int** matrix, int MATRIX_SIZE) {
    for (int i = 0; i < MATRIX_SIZE; i++) {
        for (int j = 0; j < MATRIX_SIZE; j++) {
            cout << setw(5) << matrix[i][j];
        }
        cout << endl;
    }
    cout << endl;
};
void FindGreatestElementWithEvenNumInColumn(int** matrix, int MATRIX_SIZE) {
    cout << endl << "A)" << endl;
    for (int i = 0; i < MATRIX_SIZE; i++) {
        int maxValue = RANDOM_MIN -1;
        for (int j = 0; j < MATRIX_SIZE; j++) {
            if ((matrix[j][i] > maxValue) && ((i + 1) % 2 == 0)) {
                maxValue = matrix[j][i];
            }
        }
        if (maxValue != RANDOM_MIN -1) {
            cout << setw(5) << maxValue;
        }
        else {
            cout << setw(5) << "-";
        }
    }
    cout << endl;
};
void FindRiseChainMinMaxInline(int** matrix, int MATRIX_SIZE) {
    bool noOneTrue{ true };
    cout << endl << "Б)" << endl;
    for (int i{}; i < MATRIX_SIZE; i++) {
        int maxValue = RANDOM_MIN-1;
        int minValue = RANDOM_MAX+1;
        int minInLine{}, maxInLine{}, countOfFalseElements{ 0 };
        bool flag{false};
        for (int j{}; j < MATRIX_SIZE; j++) {
            if (matrix[i][j] > maxValue) {
                maxValue = matrix[i][j];
                maxInLine = j;
            }
            if (matrix[i][j] < minValue) {
                minValue = matrix[i][j];
                minInLine = j;
            }
        }
        if (minInLine+2 < maxInLine) {
            for (int j{ minInLine + 2 }; j < maxInLine; j++) {
                if (matrix[i][j] <= matrix[i][j - 1]) {
                    countOfFalseElements++;
                }
            }
            if (countOfFalseElements == 0) {
                flag = true;
            }
           
        }
        if (flag == true) {
            noOneTrue = false;
            cout << endl << setw(2) << i + 1 << ")";
            for (int j{}; j < MATRIX_SIZE; j++) {
                cout << setw(5) << matrix[i][j];
            }
            cout << endl;
        }
    }
    if (noOneTrue == true) {
        cout << "Таких строк нет."<<endl;
    }
};
void FindMinElementInTriangle(int** matrix, int MATRIX_SIZE) {
    cout << endl << "В)";
    int minValue = RANDOM_MAX+1;
    for (int i = MATRIX_SIZE / 2; i < MATRIX_SIZE; i++) {
        for (int j = MATRIX_SIZE - i - 1; j <= i; j++) {
            if (matrix[i][j] < minValue) {
                minValue = matrix[i][j];
            }
        }
    }
    cout << endl << minValue;
};
