#include <stdio.h>

void main() {
	double cijfer;
	printf("Geef je cijfer: ");
	scanf_s("%lf", &cijfer);
	if (cijfer < 5.5 && cijfer >= 1) {
		printf("Dit cijfer is een onvoldoende.\n");
	}
	else if (cijfer >= 5.5 && cijfer <= 10) {
		printf("Dit cijfer is een voldoende.\n");
	}
	else {
		printf("Ongeldige invoer.");
	}
}