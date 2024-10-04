#include <stdio.h>
#include <math.h>

double gemiddelde(a, b, c, d) {
	double gem = ((a + b + c + d) / 4);
	return gem;
}

void main() {
	int a, b, c, d;
	printf("Geef vier waardes a, b, c, d. Het moeten ints zijn: ");
	scanf_s("%d, %d, %d, %d", &a, &b, &c, &d);

	double gem = gemiddelde(a, b, c, d);
	printf("Het gemiddelde van deze getallen is: %.2lf", gem);
}