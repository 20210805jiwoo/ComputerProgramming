#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int coins[4] = { 500,100,50,10 };
	int change, i, count[4];
	printf("Enter the amount of change: ");
	scanf_s("%d", &change);

	for (i = 0; i < 4; i++) {
		count[i] = change / coins[i];
		change = change % coins[i];
		printf("%d coin: %d\n", coins[i], count[i]);
	}
}
