#include <iostream>

// Function to print the elements of both diagonals in a square matrix
void printDiagonals(const int arr[][3], int size) {
    // Print the elements of the main diagonal
    std::cout << "Main Diagonal:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i][i] << " ";
    }
    std::cout << std::endl;

    // Print the elements of the other diagonal
    std::cout << "Other Diagonal:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i][size - 1 - i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Input matrix
    const int size = 3;
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    // Print the elements of both diagonals
    printDiagonals(matrix, size);

    return 0;
}
