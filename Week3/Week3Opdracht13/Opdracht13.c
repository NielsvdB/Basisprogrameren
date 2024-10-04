#include <stdio.h>

void main() {
	int cijfer;

	printf("Welk cijfer heb je gehaald(int): ");
	scanf_s("%d", &cijfer);

	switch (cijfer) {
		case 1:
			printf("Zwaar onvoldoende.\n");
			break;

		case 2:
			printf("Onvoldoende.\n");
			break;
		case 3:
			printf("Zeer matig.\n");
			break;
		case 4:
			printf("Matig.\n");
			break;
		case 5:
			printf("Bijna voldoende.\n");
			break;
		case 6:
			printf("Voldoende.\n");
			break;
		case 7:
			printf("Redelijk goed.\n");
			break;
		case 8:
			printf("Goed.\n");
			break;
		case 9:
			printf("Zeer goed.\n");
			break;
		case 10:
			printf("Uitmuntend.\n");
			break;
		default:
			printf("Geen geldige invoer.\n");

	}
}