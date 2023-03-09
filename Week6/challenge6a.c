#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    char word1[81], word2[81];
    int i, j = 0, same = 0;

    printf("Enter the first word: ");
    scanf("%s", word1);

    printf("Enter the second word: ");
    scanf("%s", word2);

    for (i = 0; word1[i] != '\0' || word2[i] != '\0'; i++)
    {
        if (word1[i] == word2[j]) {
            same = 1;
            j++;
        }
        else {
            same = 0;
            break;
        }
    }
    word1[i] = '\0';
    word2[j] = '\0';

    if (same == 1)
        printf("두 단어는 같다.\n");
    else
        printf("두 단어는 다르다.\n");

    return 0;
}