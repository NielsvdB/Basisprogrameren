#include <stdio.h>

int som37(int getal, int n) {
	if (getal == 0) {
		return n;
	}
	if (((getal % 7) == 0 || ((getal % 3) == 0))) {
		n = n + getal;
	}
	getal--;
	som37(getal, n);
}

void main() {
	int a;

	printf("Geef een int: ");
	scanf_s("%d", &a);
	a = som37(a, 0);
	printf("De som van alle getallen tot de gegeven int die deelbaar zijn door 7 en 3 is: %d\n", a);
}