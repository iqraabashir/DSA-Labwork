
#include <stdio.h>

// Function to take matrix input
void inputMatrix(int matrix[10][10], int row, int col, char name) {
    printf("Enter elements of Matrix %c (%dx%d):\n", name, row, col);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[10][10], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to add two matrices
void addMatrices(int A[10][10], int B[10][10], int C[10][10], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

// Function to subtract two matrices
void subtractMatrices(int A[10][10], int B[10][10], int C[10][10], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int A[10][10], int B[10][10], int C[10][10], int rowA, int colA, int colB) {
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colB; j++) {
            C[i][j] = 0;
            for (int k = 0; k < colA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int A[10][10], B[10][10], C[10][10];
    int rowA, colA, rowB, colB;
    int choice;

    printf("Enter rows and columns for Matrix A: ");
    scanf("%d %d", &rowA, &colA);
    inputMatrix(A, rowA, colA, 'A');

    printf("Enter rows and columns for Matrix B: ");
    scanf("%d %d", &rowB, &colB);
    inputMatrix(B, rowB, colB, 'B');

    do {
        printf("\nMatrix Operations Menu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (rowA == rowB && colA == colB) {
                    addMatrices(A, B, C, rowA, colA);
                    printf("\nResult of Addition:\n");
                    displayMatrix(C, rowA, colA);
                } else {
                    printf("\nMatrix Addition Not Possible! (Dimensions must be same)\n");
                }
                break;

            case 2:
                if (rowA == rowB && colA == colB) {
                    subtractMatrices(A, B, C, rowA, colA);
                    printf("\nResult of Subtraction:\n");
                    displayMatrix(C, rowA, colA);
                } else {
                    printf("\nMatrix Subtraction Not Possible! (Dimensions must be same)\n");
                }
                break;

            case 3:
                if (colA == rowB) {
                    multiplyMatrices(A, B, C, rowA, colA, colB);
                    printf("\nResult of Multiplication:\n");
                    displayMatrix(C, rowA, colB);
                } else {
                    printf("\nMatrix Multiplication Not Possible! (Columns of A must match rows of B)\n");
                }
                break;

            case 4:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 4);

    return 0;
}