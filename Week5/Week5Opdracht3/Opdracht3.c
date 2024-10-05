#include <stdio.h>

void optellen(int* arr1, int* arr2, int* arr3, int length);

void main() {
	int a[10] = { 4,22,1,22,3,5,73,12,33,1 };
	int b[10] = { 6,47,7,25,88,51,4,55,75,12 };
	int c[10] = { 0  };
	
	//begin arrays weergeven
	printf("Array a:\n");
	for (int x = 0; x < (sizeof(a) / sizeof(a[0])); x++) {
		printf("Pos: %d, waarde: %d\n", x, a[x]);
	}

	printf("\nArray b:\n");
	for (int x = 0; x < (sizeof(b) / sizeof(b[0])); x++) {
		printf("Pos: %d, waarde: %d\n", x, b[x]);
	}

	//functie aanroepen
	optellen(&a, &b, &c, (sizeof(a) / sizeof(a[0])));

	//resultaat weergeven
	printf("==================================================================+\nArray c:\n");
	for (int x = 0; x < (sizeof(c) / sizeof(c[0])); x++) {
		printf("Pos: %d, waarde: %d\n", x, c[x]);
	}
}

void optellen(int* arr1, int* arr2, int* arr3, int length) {
	for (int x = 0; x < length; x++) {
		int* ptr1 = arr1 + x;
		int* ptr2 = arr2 + x;
		int* ptr3 = arr3 + x;

		*ptr3 = *ptr1 + *ptr2;
	}
}