#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10
#include <stdio.h>

int askReservation();
void printSeats(int s[], int size);
void processReservation(int s[], int size, int seatNumber);

int main(void) {
	int seatChoice = 0;
	int seats[SIZE] = { 0 };

	printf("******좌석 예약 시스템******\n");

	while (seatChoice <= 10 && processReservation != 1) {
			printSeats(seats, SIZE);
			seatChoice += askReservation();
			processReservation(seats, SIZE, seatChoice);

			while (getchar() != '\n'); //버퍼 비움
		}
	return 0;
}

int askReservation()
{
	int people;
	printf("\n좌석을 예약하시겠습니까?(몇명) ");
	scanf("%d", &people);

	return people;
}
void processReservation(int s[], int size, int seatNumber)
{
	int i;
	if (seatNumber <= 10) {
		for (i = 0; i < seatNumber; i++)
			s[i] = 1;
	}
}
void printSeats(int s[], int size)
{
	int i;
	printf("----------------------\n");
	printf(" 1 2 3 4 5 6 7 8 9 10\n");
	printf("----------------------\n");

	for (i = 0; i < SIZE; i++)
		printf("%2d", s[i]);
	printf("\n");
}