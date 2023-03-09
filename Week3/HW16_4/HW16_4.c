#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void initTable(int arr[][5], int size);
int totalTable(int arr[][5], int size);
void printTable(int arr[][5], int size);
int totalRow(int arr[][5], int size);
int main(void)
{
    int table[3][5];
    int total = 0;

    srand(time(NULL));

    initTable(table, 3);
    printf("발생된 난수의 평균은 %d입니다", totalTable(table, 3) / 15);

    printTable(table, 3);

    printf("----각 열의 합----\n");
    printf("%d", totalCol(table, 3));
    printf("\n");
}
void initTable(int arr[][5], int size)
{
    int i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 5; j++)
            arr[i][j] = rand() % 100;

    return;
}
int totalTable(int arr[][5], int size)
{
    int i, j, sum = 0;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 5; j++)
            sum += arr[i][j];
    return sum;
}
void printTable(int arr[][3], int size)
{
    int i, j;
    for (i = 0; i < 3; i++) {
        printf("\n");
        for (j = 0; j < 5; j++)
            printf("%5d", arr[i][j]); //난수표 출력
    }
    printf("\n");
    return;
}
int totalCol(int arr[][5], int size)
{
    int i, j, subTotal;
    for (j = 0; j < 5; j++) {
        subTotal = 0;
        for (i = 0; i < 3; i++)
            subTotal += arr[i][j];
        printf("%5d", subTotal);
    }
}