#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char string[50]; // �ԷµǴ� ���ڿ��� ����
    char alphaString1[50]; // �Է¹��ڿ����� ���ĺ��� ����
    char alphaString2[50]; // ��ҹ��ڸ� �ٲ�
    char digitString[50];
    char convertedString[50];  // ���ڵ�� ���ڵ�� ��迭�� ���ڿ�
    int i, j = 0, k = 0;

    printf("���ڿ��� �Է��ϼ���: ");
    fgets(string, strlen(string), stdin);

    for (i = 0; string[i] != '\0'; i++) {
        if (isalpha(string[i]) != 0) {
            alphaString1[j] = string[i];
            j++;
        }
        else if (isdigit(string[i]) != 0) {
            digitString[k] = string[i];
            k++;
        }
    }
    alphaString1[j] = '\0';
    digitString[k] = '\0';

    printf("���ڵ��� %s\n", alphaString1);
    printf("���ڵ��� %s\n", digitString);

    j = 0;
    for (i = 0; alphaString1[i] != '\0'; i++) {
        if (islower(alphaString1[i]) != 0) {
            alphaString2[j] = toupper(alphaString1[i]);
            j++;
        }
        else if (isupper(alphaString1[i]) != 0) {
            alphaString2[j] = tolower(alphaString1[i]);
            j++;
        }
    }
    alphaString2[j] = '\0';

    strcpy(convertedString, alphaString1);
    strcat(convertedString, digitString);

    printf("��ҹ��ڸ� �ٲ� ���ڵ��� %s\n", alphaString2);
    printf("���ڵ�� ���ڵ�� ��迭�� ���ڿ��� %s\n", convertedString);
}