#include <iostream>
#include <vector>

std::vector<std::vector<int>> generateSpiralMatrix(int n) {
    std::vector<std::vector<int>> matrix(n, std::vector<int>(n, 0));

    int num = 1;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (top <= bottom && left <= right) {
        // Traverse from left to right
        for (int i = left; i <= right; ++i) {
            matrix[top][i] = num++;
        }
        top++;

        // Traverse from top to bottom
        for (int i = top; i <= bottom; ++i) {
            matrix[i][right] = num++;
        }
        right--;

        // Traverse from right to left
        if (top <= bottom) {
            for (int i = right; i >= left; --i) {
                matrix[bottom][i] = num++;
            }
            bottom--;
        }

        // Traverse from bottom to top
        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                matrix[i][left] = num++;
            }
            left++;
        }
    }

    return matrix;
}

// Function to display a matrix
void displayMatrix(const std::vector<std::vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int value : row) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int n;

    // Input the positive integer n
    std::cout << "Enter a positive integer n: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Please enter a positive integer." << std::endl;
        return 1;
    }

    // Generate and display the spiral matrix
    std::vector<std::vector<int>> result = generateSpiralMatrix(n);
    std::cout << "Spiral Matrix for n = " << n << ":" << std::endl;
    displayMatrix(result);

    return 0;
}
