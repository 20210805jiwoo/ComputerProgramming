#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int mergeString(char c[], char a[], char b[])
{
	int i, j, key = 0;
	for (i = 0; c[i] != '\0'; i++)
	{
		while (a[i] == '\0' && b[i] == '\0')
		{
			if (a[i] < b[j])
			{
				key == a[i];
				break;
				a[i] = '\0';
				i++;
			}
			
			else {
				key == b[j];
				j++;
				b[j] = '\0';
			}
		}
	}
}
	int main(void)
	{
		char word1[10], word2[10];
		char mergedWord[20];

		scanf("%s", word1);
		scanf("%s", word2);
		mergeString(mergedWord, word1, word2);
		printf("%s\n", mergedWord);
	}
