#include <stdio.h>

void printSomEven(int n);

void main() {
	int n;
	printf("Geef een int: ");
	scanf_s("%d", &n);
	printSomEven(n);
}

void printSomEven(int n) {
	int som = 0;
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			som += i;
		}
	}
	printf("De som van alle even getallen van 0 tot en met %d is: %d", n, som);
}