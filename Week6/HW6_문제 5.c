#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int checking(char w0[], char w[])
{
	int i, j, count = 0;
	for (i = 0; w[i] != '\0'; i++) count++;
	for (j = 0; w0[j] != '\0'; j++)
	{
		for (i = 0; w[i] != '\0'; i++)
		{
			if (w0[j] == w[i])
				break;
		}
		if (i == count)
			return 0;
	}
	return 1;
}
int main(void)
{
	char w0[81] = "apple";
	char w1[81], w2[81], w3[81];

	scanf("%s %s %s", w1, w2, w3);

	printf("%d", checking(w0, w1));
	printf("%d", checking(w0, w2));
	printf("%d", checking(w0, w3));
}