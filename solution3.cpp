#include <iostream>

// Function to print the matrix in a wave form
void printMatrixInWaveForm(int arr[][3], int rows, int cols) {
    for (int j = 0; j < cols; ++j) {
        // For even columns, print from top to bottom
        if (j % 2 == 0) {
            for (int i = 0; i < rows; ++i) {
                std::cout << arr[i][j] << " ";
            }
        } else {
            // For odd columns, print from bottom to top
            for (int i = rows - 1; i >= 0; --i) {
                std::cout << arr[i][j] << " ";
            }
        }
    }
}

int main() {
    // Input matrix
    const int rows = 3;
    const int cols = 3;
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    // Print the matrix in a wave form
    std::cout << "Matrix in Wave Form:" << std::endl;
    printMatrixInWaveForm(matrix, rows, cols);

    return 0;
}
