#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_ROWS 100
#define MAX_COLS 100

void fillMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand() % 101; // Genera números aleatorios entre 0 y 100
        }
    }
}

void printMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void transposeMatrix(int matrix[MAX_ROWS][MAX_COLS], int transposedMatrix[MAX_COLS][MAX_ROWS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposedMatrix[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int rows, cols;

    printf("Ingrese el numero de filas: ");
    scanf("%d", &rows);
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &cols);

    int matrix[MAX_ROWS][MAX_COLS];
    int transposedMatrix[MAX_COLS][MAX_ROWS];

    // Paso 1: Llenar la matriz con números aleatorios
    fillMatrix(matrix, rows, cols);

    // Paso 2: Imprimir la matriz original
    printf("\nMatriz Original:\n");
    printMatrix(matrix, rows, cols);

    // Paso 3: Calcular la matriz transpuesta
    transposeMatrix(matrix, transposedMatrix, rows, cols);

    // Paso 4: Imprimir la matriz transpuesta
    printf("\nMatriz Transpuesta:\n");
    printMatrix(transposedMatrix, cols, rows);

    return 0;
}