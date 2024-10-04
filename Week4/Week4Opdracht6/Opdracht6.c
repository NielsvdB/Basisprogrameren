#include <stdio.h>
#include <stdbool.h>

int kleinsteSomDeler(int getal, int m) {
	bool loop = 0;
	for (int a = 1; a <= getal; a++) {
		if (m % a != 0) {
			loop = 1;
		}
	}
	if (loop == 1) {
		kleinsteSomDeler(getal, m += 1);
	}
	else {
		return m;
	}
}

void main() {
	int n;
	printf("Geef een int: ");
	scanf_s("%d", &n);
	if (n > 10) {
		printf("Overflow!");
	}
	else {
		n = kleinsteSomDeler(n, 1);
		printf("Het kleinste getal dat door 1 tot en met de int deelbaar is, is: %d", n);
	}
}