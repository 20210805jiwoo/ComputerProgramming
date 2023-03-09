#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void rotateMatrix(int a[][4], int b[][4], int size)
{
    for (int i = 0; i < size; i++)
        for (int j = 0; j < 4; j++)
            b[i][j] = a[size - 1 - j][i];
}

void printMatrix(int a[][4], int size)
{
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%3d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void initMatrix(int a[][4], int size)
{
    int num = 1;
    for (int i = 0; i < size; i++)
        for (int j = 0; j < 4; j++) {
            a[i][j] = num;
            num++;
        }
}

void copyMatrix(int a[][4], int b[][4], int size)
{
    for (int i = 0; i < size; i++)
        for (int j = 0; j < 4; j++)
            a[i][j] = b[i][j];
}
int main(void)
{
    int A[4][4], B[4][4];

    initMatrix(A, 4);
    printMatrix(A, 4);

    for (int i = 0; i < 4; i++) {
        rotateMatrix(A, B, 4);
        printMatrix(B, 4);
        copyMatrix(A, B, 4);
    }

}