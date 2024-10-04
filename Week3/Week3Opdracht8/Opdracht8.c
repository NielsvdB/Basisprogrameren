#include <stdio.h>
#include <math.h>


//functie die print hoeveel geld je hebt (Ik ben ervan bewust dat dit niet nodig is)
void printgeld(float bank, int jaar) {
	printf("Je hebt na %d jaar: %4.2f euro.\n", jaar, bank);
	return bank;
}

void main() {
	float geld;
	float rente = 1.02;
	int jaren, loepdieloep;

	printf("Hoeveel geld heb je: ");
	scanf_s("%f", &geld);
	printf("\nHoeveel jaar wil je de rente over berekenen: ");
	scanf_s("%d", &jaren);

	for (loepdieloep = 1; loepdieloep <= jaren; loepdieloep++) {
		(float)geld = (geld * 1.02);
		printgeld(geld, loepdieloep);
	}
}