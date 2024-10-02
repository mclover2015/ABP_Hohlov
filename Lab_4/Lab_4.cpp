#include <iostream>

using namespace std;

const int N = 10;


void print_matrix(int matrix[N][N]) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

int Lab_4() {
    int matrix[N][N] = {0};
    int counter = 1;


    for (int start_col = N - 1; start_col >= 0; --start_col) {
        int row = 0;
        int col = start_col;
        while (col < N && row < N) {
            matrix[row][col] = counter++;
            ++row;
            ++col;
        }
    }


    for (int start_row = 1; start_row < N; ++start_row) {
        int row = start_row;
        int col = 0;
        while (col < N && row < N) {
            matrix[row][col] = counter++;
            ++row;
            ++col;
        }
    }

    print_matrix(matrix);

    return 0;
}
