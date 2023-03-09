#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
enum Season {
	Spring = 1, Summer = 2, Fall = 3, Winter = 4
};
int main(void)
{
	int num;
	printf("Input a season(1:Spring~4.Winter) : ");
	scanf("%d", &num);
	if (num == Spring)
		printf("봄입니다.\n");
	else if (num == Summer)
		printf("여름입니다.\n");
	else if (num == Fall)
		printf("가을입니다.\n");
	else
		printf("겨울입니다.\n");
		
}