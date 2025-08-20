#include <stdio.h>

void reverseArray(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

void multiplyMatrices(int A[3][3], int B[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 3; k++)
                result[i][j] += A[i][k] * B[k][j];
        }
}

void transposeMatrix(int mat[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = i + 1; j < 3; j++) {
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
}

int main() {
    int choice;
    do {
        printf("\n==== Q4 MENU ====\n");
        printf("1. Reverse Array\n");
        printf("2. Matrix Multiplication (3x3)\n");
        printf("3. Transpose of Matrix (3x3)\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            int arr[100], size;
            printf("\nHow many elements? ");
            scanf("%d", &size);
            printf("Enter elements:\n");
            for (int i = 0; i < size; i++) {
                printf("Element %d: ", i + 1);
                scanf("%d", &arr[i]);
            }
            reverseArray(arr, size);
            printf("\nReversed Array: ");
            for (int i = 0; i < size; i++)
                printf("%d ", arr[i]);
            printf("\n");

        } else if (choice == 2) {
            int A[3][3], B[3][3], C[3][3];
            printf("\nEnter Matrix A (3x3):\n");
            for (int i = 0; i < 3; i++)
                for (int j = 0; j < 3; j++)
                    scanf("%d", &A[i][j]);
            printf("\nEnter Matrix B (3x3):\n");
            for (int i = 0; i < 3; i++)
                for (int j = 0; j < 3; j++)
                    scanf("%d", &B[i][j]);
            multiplyMatrices(A, B, C);
            printf("\nResult (A × B):\n");
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++)
                    printf("%d ", C[i][j]);
                printf("\n");
            }

        } else if (choice == 3) {
            int mat[3][3];
            printf("\nEnter a 3x3 Matrix:\n");
            for (int i = 0; i < 3; i++)
                for (int j = 0; j < 3; j++)
                    scanf("%d", &mat[i][j]);
            transposeMatrix(mat);
            printf("\nTranspose of the Matrix:\n");
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++)
                    printf("%d ", mat[i][j]);
                printf("\n");
            }

        } else if (choice == 4) {
            printf("\nGoodbye! ??\n");

        } else {
            printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}

