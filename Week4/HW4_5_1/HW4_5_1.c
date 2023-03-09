#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int get_cycle_number(int n);
int main(void)
{
	int num;
	scanf("%d", &num);
	printf("\n%d\n", get_cycle_number(num));
}
int get_cycle_number(int n)
{
	int count = 1;
	while (n != 1)
	{
		if (n % 2 == 0) {
			n = n / 2;
			count++;
			printf("%d ", n);
		}
		else {
			n = n * 3 + 1;
			count++;
			printf("%d ", n);
		}
	}
	return count;
}