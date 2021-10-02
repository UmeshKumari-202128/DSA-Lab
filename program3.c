#include <stdio.h>

  int rows, columns;


  void matrixAddition(int mat1[][10], int mat2[][10], int mat3[][10]) {
        int i, j;

        for (i = 0; i < rows; i++) {
                for (j = 0; j < columns; j++) {
                        mat3[i][j] = mat1[i][j] + mat2[i][j];
                }
        }
        return;
  }

  void matrixSubtraction(int mat1[][10], int mat2[][10], int mat4[][10]) {
        int i, j;

        for (i = 0; i < rows; i++) {
                for (j = 0; j < columns; j++) {
                        mat4[i][j] = mat1[i][j] - mat2[i][j];
                }
        }
        return;
  }

  void matrixMultiplication(int mat1[][10], int mat2[][10], int mat5[][10]) {
        int i, j;

        for (i = 0; i < rows; i++) {
                for (j = 0; j < columns; j++) {
                        mat5[i][j] = mat1[i][j]*mat2[i][j];
                }
        }
        return;
  }

  void matrixTranspose(int mat1[][10], int mat6[][10]) {
        int i, j;

        for (i = 0; i < columns; i++) {
                for (j = 0; j < rows; j++) {
                        mat6[i][j] = mat1[j][i];
                }
        }
        return;
  }

  int main() {
        int matrix1[10][10], matrix2[10][10],matrix3[10][10],matrix4[10][10],matrix5[10][10],matrix6[10][10],i,j;


        printf("Enter the no of rows and columns(<=10):");
        scanf("%d%d", &rows, &columns);

        if (rows > 10 || columns > 10) {
                printf("No of rows/columns is greater than 10\n");
                return 0;
        }


        printf("Enter the input for first matrix:");
        for (i = 0; i < rows; i++) {
                for (j = 0; j < columns; j++) {
                        scanf("%d", &matrix1[i][j]);
                }
        }


        printf("Enter the input for second matrix:");
        for (i = 0; i < rows; i++) {
                for (j = 0; j < columns; j++) {
                        scanf("%d", &matrix2[i][j]);
                }
        }


        matrixAddition(matrix1, matrix2, matrix3);


        printf("\nResult of Matrix Addition:\n");
        for (i = 0; i < rows; i++) {
                for (j = 0; j < columns; j++) {
                        printf("%5d", matrix3[i][j]);
                }
                printf("\n");
        }

         matrixSubtraction(matrix1, matrix2, matrix4);


        printf("\nResult of Matrix Subtraction:\n");
        for (i = 0; i < rows; i++) {
                for (j = 0; j < columns; j++) {
                        printf("%5d", matrix4[i][j]);
                }
                printf("\n");
        }

        matrixMultiplication(matrix1, matrix2, matrix5);


        printf("\nResult of Matrix Multiplication:\n");
        for (i = 0; i < rows; i++) {
                for (j = 0; j < columns; j++) {
                        printf("%5d", matrix5[i][j]);
                }
                printf("\n");
        }

         matrixTranspose(matrix1, matrix6);


        printf("\nResult of Matrix Transpose:\n");
        for (i = 0; i < columns; i++) {
                for (j = 0; j < rows; j++) {
                        printf("%5d", matrix6[i][j]);
                }
                printf("\n");
        }
        return 0;
  }



