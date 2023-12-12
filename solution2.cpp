#include <iostream>

// Function to rotate the matrix by 90 degrees anti-clockwise
void rotateMatrixAntiClockwise(int arr[][3], int size) {
    // Transpose the matrix
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            // Swap arr[i][j] and arr[j][i]
            std::swap(arr[i][j], arr[j][i]);
        }
    }

    // Reverse the order of rows
    for (int i = 0; i < size / 2; ++i) {
        for (int j = 0; j < size; ++j) {
            // Swap arr[i][j] and arr[size - 1 - i][j]
            std::swap(arr[i][j], arr[size - 1 - i][j]);
        }
    }
}

// Function to display a matrix
void displayMatrix(int arr[][3], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    // Input matrix
    const int size = 3;
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    // Rotate the matrix by 90 degrees anti-clockwise
    rotateMatrixAntiClockwise(matrix, size);

    // Display the rotated matrix
    std::cout << "Rotated Matrix:" << std::endl;
    displayMatrix(matrix, size);

    return 0;
}
