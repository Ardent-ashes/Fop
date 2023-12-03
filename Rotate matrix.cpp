#include <stdio.h>

#define N 3 // Change this value to match your matrix size

void rotateMatrixAntiClockwise(int matrix[N][N]) {
    // Transpose the matrix
/*    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }*/

    // Reverse each row
    for (int i = 0; i < N; i++) {
        int start = 0;
        int end = N - 1;
        while (start < end) {
            int temp = matrix[start][i];
            matrix[start][i] = matrix[end][i];
            matrix[end][i] = temp;
            start++;
            end--;
        }
    }
}

void printMatrix(int matrix[N][N]) {
    printf("Rotated Matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Original Matrix:\n");
    printMatrix(matrix);

    rotateMatrixAntiClockwise(matrix);

    printMatrix(matrix);

    return 0;
}
