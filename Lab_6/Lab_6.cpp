#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>


int printMatrix(const std::vector<std::vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int elem : row) {
            std::cout << elem << "\t";
        }
        std::cout << std::endl;
    }
    return 0;
}

int fillMatrix(std::vector<std::vector<int>>& matrix) {
    for (auto& row : matrix) {
        for (int& elem : row) {
            elem = rand() % 101 - 50;
        }
    }
    return 0;
}


int squares(std::vector<std::vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();


    for (int i = 0; i < rows; i += 3) {
        for (int j = 0; j < cols; j += 3) {

            int sum = 0;
            for (int x = i; x < i + 3; ++x) {
                for (int y = j; y < j + 3; ++y) {
                    if (x == i + 1 && y == j + 1) continue;
                    sum += matrix[x][y];
                }
            }

            matrix[i + 1][j + 1] = sum;
        }
    }
    return 0;
}

int Lab_6() {
    srand(time(0));

    const int rows = 6;
    const int cols = 6;

    std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols));

    fillMatrix(matrix);

    std::cout << "radom nums:" << std::endl;
    printMatrix(matrix);

    squares(matrix);

    std::cout << "\nchanged:" << std::endl;
    printMatrix(matrix);

    return 0;
}
