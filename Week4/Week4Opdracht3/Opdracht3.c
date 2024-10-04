#include <stdio.h>
#include <math.h>

void Swap(int* a, int* b) {
	int c = *a;
	int d = *b;
	printf("a is nu %d en b is nu %d.\n", d, c);
}

void main() {
	int a, b;
	printf("geef ints\na, b: ");
	scanf_s("%d, %d", &a, &b);
	Swap(&a, &b);
}