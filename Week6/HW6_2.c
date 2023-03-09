#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    char word[81], num[81];
    int i, j = 0, sum = 0;

    printf("Enter one word: ");
    scanf("%s", word);

    for (i = 0; word[i] != '\0'; i++)
    {
        if (word[i] >= 48 && word[i] < 65)
        {
            num[j] = word[i] - 48;
            j++;
        }
    }
    num[j] = '\0';

    for (j = 0; num[j] != '\0'; j++)
    {
        sum += num[j];
    }
    printf("안에 있는 숫자들의 합은 %d\n", sum);
}