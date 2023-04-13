#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define MAX_SET_SIZE 10
#define HAVE_ELEMENT 1
#define DO_NOT_HAVE_ELEMENT 0

int hasElement(int set[], int size, int element);
int setUnion(int set1[], int size1, int set2[], int size2, int setResult[]);
int setIntersecton(int set1[], int size1, int set2[], int size2, int setResult[]);
int setComplements(int set1[], int size1, int set2[], int size2, int setResult[]);
void printSet(int set[], int size);
int addOneElement(int set[], int size, int element);

int main(int argc, char* argv[])
{
	int i;

	int setA[MAX_SET_SIZE];
	int setB[MAX_SET_SIZE];
	int setC[MAX_SET_SIZE * 2];

	int sizeA;
	int sizeB;
	int sizeC;

	printf("Enter the size of Set A:");
	scanf("%d", &sizeA);
	i = 0;
	while (i < sizeA)
	{
		printf("Enter the number for Set A (%d/%d):", i + 1, sizeA);
		scanf("%d", &setA[i]);
		i = addOneElement(setA, i, setA[i]);
	}

	printf("Enter the size of Set B:");
	scanf("%d", &sizeB);
	i = 0;
	while (i < sizeB)
	{
		printf("Enter the number for Set B (%d/%d):", i + 1, sizeB);
		scanf("%d", &setB[i]);
		i = addOneElement(setB, i, setB[i]);
	}

	printf("Set A: ");
	printSet(setA, sizeA);
	printf("Set B: ");
	printSet(setB, sizeB);

	sizeC = setUnion(setA, sizeA, setB, sizeB, setC); // Union, setC is the result set
	printf("Union of setA and setB: ");
	printSet(setC, sizeC);

	sizeC = setIntersecton(setA, sizeA, setB, sizeB, setC); //Intersection, setC is the result set
	printf("Intersection of setA and setB: ");
	printSet(setC, sizeC);

	sizeC = setComplements(setA, sizeA, setB, sizeB, setC); //Complements, setC is the result set
	printf("Set-theoretic difference of setA and setB (setA - setB): ");
	printSet(setC, sizeC);

	return 0;
}

// If the set has the element, returns 1;
// else return 0;
int hasElement(int set[], int size, int element)
{
	int i = 0;
	for (i = 0; i < size; i++)
		if (set[i] == element)
			return HAVE_ELEMENT; // we found it! 원소가 있는 경우

	return DO_NOT_HAVE_ELEMENT; //원소가 없는 경우
}
// 원소를 집합에 추가. 이미 존재하면 추가하지 않고 redundant라고 출력한다. 현재의 집합 크기를 반환한다.
int addOneElement(int set[], int size, int element)
{
	if (!hasElement(set, size, element)) { //element 가지고 있지 않으면,
		set[size] = element; //배열에 추가
		size++;
	}
	else
		printf("It is redundant. Please retry.\n");
	return size;
}
//집합 출력
void printSet(int set[], int size)
{
	int i;
	printf("{ ");
	for (i = 0; i < size - 1; i++) {
		printf("%d, ", set[i]);
	}
	printf("%d }\n", set[i]);
}
//합집합
int setUnion(int set1[], int size1, int set2[], int size2, int setResult[])
{
	int i, j;
	for (i = 0; i < size1; i++)
		setResult[i] = set1[i]; //먼저 set1의 원소 모두 setResult1에 추가
	for (j = 0; j < size2; j++) {
		if (!hasElement(setResult, i, set2[j])) {
			setResult[i] = set2[j];
			i++;
		}
	}
	return i;
}
//교집합
int setIntersecton(int set1[], int size1, int set2[], int size2, int setResult[])
{
	int i = 0, j;
	for (j = 0; j < size2; j++) {
		if (hasElement(set1, size1, set2[j]))
			setResult[i++] = set2[j];
	}
	return i;
}
//차집합
int setComplements(int set1[], int size1, int set2[], int size2, int setResult[])
{
	int i = 0, j;
	for (j = 0; j < size1; j++)
		if (!hasElement(set2, size2, set1[j]))
			setResult[i++] = set1[j];
	return i;
}