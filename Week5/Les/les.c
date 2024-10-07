#include <stdio.h>

void swap(int* a, int* b);
void printarray(int * y, int lengte);
void main() {
	int a = 4;
	int b = 5;
	//swap(&a, &b);
	int y[4] = { 1, 2, 33, 4 };

	printarray(y, sizeof(y) / sizeof(y[0]));

	//printf("waarde van a = %d\nwaarde van b = %d", a, b);
	int schaakbord[8][8];
	int kubus[3][3][3];
}

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void printarray(int * y, int lengte) {
	for (int i = 0; i < lengte; i++) {
		printf("Element %d: %d\n", i, y[i]);
	}
}