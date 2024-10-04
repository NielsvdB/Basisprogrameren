#include <stdio.h>
#include <math.h>

void main() {
	float a, b, c, d, e, f;
	printf("Voer 6 floats: ");
	scanf_s("%f, %f, %f, %f, %f, %f", &a, &b, &c, &d, &e, &f);

	float gem = (a + b + c + d + e + f) / 6;
	printf("\nHet gemiddelde van deze 6 getallen is: %.2f\n", gem);
	if (gem < 5.5) {
		printf("Dit is een onvoldoende.\n");
	}
	else {
		printf("Dit is een voldoende.\n");
	}
}