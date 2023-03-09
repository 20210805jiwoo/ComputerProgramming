#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printMatrix(int a[][3], int size)
{
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%3d ", a[i][j]);
        }
        printf("\n");
    }
}

void readMatrix(int a[][2], int size)
{
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }
}

void readMatrix2(int b[][3], int size)
{
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }
}

void matrixMultiplication(int a[][2], int b[][3], int c[][3], int size)
{
    int i, j, k;
    for (i = 0; i < size; i++)
        for (j = 0; j < 3; j++) {
            c[i][j] = 0;
            for (k = 0; k < 2; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
}

int main(void)
{
    int X[4][2], Y[2][3], Z[4][3];
    printf("(4 x 2) ��� X �Է�:\n");
    readMatrix(X, 4);
    printf("(2 x 3) ��� Y �Է�:\n");
    readMatrix2(Y, 2);

    matrixMultiplication(X, Y, Z, 4);
    printf("��İ�:\n"); printMatrix(Z, 4);
    printf("\n");
}