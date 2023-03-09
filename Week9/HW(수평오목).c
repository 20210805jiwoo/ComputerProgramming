#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define BOARD_SIZE 10

void display(char b[][BOARD_SIZE])
{
	char ch;
	int i, j;
	printf("     ");
	for (i = 0; i < BOARD_SIZE; i++)
		printf("%2d", i);
	printf("\n     --------------------\n");
	for (i = 0; i < BOARD_SIZE; i++) {
		printf("%3d |", i);
		for (j = 0; j < BOARD_SIZE; j++)
			printf(" %c", b[i][j]);
		printf("\n");
	}
}

int winCheck(char b[][BOARD_SIZE],int r, int c) //�ش��ڸ��� ���� ���� �� �������� 5�� ���ӵǸ� �¸����� �Ǵ�
{
	for (r = 0; r < 15; r++) {
		for (c = 0; c < BOARD_SIZE; c++) {
			if (b[c][r - 2] == 1 && b[c][r - 1] == 1 && b[c][r] == 1 && b[c][r + 1] == 1 && b[c][r + 2] == 1) {

			}
		}
	}
}

void main()
{
	char board[BOARD_SIZE][BOARD_SIZE];
	char turn = 'X';
	int r, c;
	int i, j;
	int count;

	for (i = 0; i < BOARD_SIZE; i++)
		for (j = 0; j < BOARD_SIZE; j++)
			board[i][j] = ' ';

	count = 1;
	display(board);
	do
	{
		printf("Player %c(�� ��):", turn);
		scanf("%d %d", &r, &c);

		board[r][c] = turn;
		display(board);

		count++;
	} while (count <= BOARD_SIZE * BOARD_SIZE);
}