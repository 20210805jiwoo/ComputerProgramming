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
		printf("���Դϴ�.\n");
	else if (num == Summer)
		printf("�����Դϴ�.\n");
	else if (num == Fall)
		printf("�����Դϴ�.\n");
	else
		printf("�ܿ��Դϴ�.\n");
		
}