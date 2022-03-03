#pragma once

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
};
void printMatrix(int** matrix, int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << setw(5) << matrix[i][j];
        }
        cout << endl;
    }
    cout << endl;
};
void findGreatestElementWithEvenNumInColumn(int** matrix, int N) {
    cout << endl << "A)" << endl;
    int max = -10;
    for (int i = 0; i < N; i++) {
        int max = -10;
        for (int j = 0; j < N; j++) {
            if ((matrix[j][i] > max) && ((i + 1) % 2 == 0)) {
                max = matrix[j][i];
            }
        }
        if (max != -10) {
            cout << setw(5) << max;
        }
        else {
            cout << setw(5) << "-";
        }
    }
    cout << endl;
};
void afon_postaralsya(int** matrix, int N) {
    cout << endl << "Á)" << endl;
    for (int i{}; i < N; i++) {
        int max = -100;
        int min = 100;
        int min_j{}, max_j{}, flag{ 0 }, k{ 0 };
        for (int j{}; j < N; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
                max_j = j;
            }
            if (matrix[i][j] < min) {
                min = matrix[i][j];
                min_j = j;
            }
        }
        if (min_j > max_j) {
            for (int temp{ max_j + 2 }; temp < min_j; temp++) {
                if (matrix[i][temp] <= matrix[i][temp - 1]) {
                    k++;
                }
                if (k == 0) {
                    flag = 1;
                }
            }


        }
        else {
            for (int temp{ min_j + 2 }; temp < max_j; temp++) {
                if (matrix[i][temp] <= matrix[i][temp - 1]) {
                    k++;
                }
                if (k == 0) {
                    flag = 1;
                }
            }


        }
        if (flag == 1) {
            cout << endl << setw(2) << i + 1 << ")";
            for (int temp{}; temp < N; temp++) {
                cout << setw(5) << matrix[i][temp];
            }
            cout << endl;
        }
    }
};
void findMinElementInTriangle(int** matrix, int N) {
    cout << endl << "Â)" << endl;
    int min = 10;
    for (int i = N / 2; i < N; i++) {
        for (int j = N - i - 1; j <= i; j++) {
            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
        }
    }
    cout << endl << min;
};
