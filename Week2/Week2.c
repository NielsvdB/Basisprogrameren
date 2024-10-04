#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//opdracht 1
/*
void main() {
	int a, b, c;
	while(1) {
		printf("\nGeef 2 ints die je wilt vermenigvuldigen: ");
		scanf("%i, %i", &a, &b);

		c = (a * b);
		if (c < 214783647) {
			printf("%i", c);
		}
		else if ((c >= 214783647) || (a > 214783647) || (b > 214783647)) { // dit is het grootste nummer dat een int kan zijn.
			printf("Overflow!");
		}
	}
}
*/

//opdracht 2
//void main() {
//	printf("Berekening van de grootte van enkele fundamentele typen.\n\n");
//	printf("char:%3d byte\n", sizeof(char));
//	printf("short:%3d bytes\n", sizeof(short));
//	printf("int:%3d bytes\n", sizeof(int));
//	printf("long:%3d bytes\n", sizeof(long));
//	printf("unsigned:%3d bytes\n", sizeof(unsigned));
//	printf("float:%3d bytes\n", sizeof(float));
//	printf("double:%3d bytes\n", sizeof(double));
//	printf("long double:%3d bytes\n", sizeof(long double));
//}

//opdracht 3
/*
void main() {
	int a = 1;

	for (a = 1; a <= 100; a++) {
		printf("%d\n", a);
	}
}
*/

//opdracht 4
/*
void main() {
	char x;

	printf("Geef een char: ");
	scanf("%c", &x);
	printf("De index van deze char is: %d", x); //als je een char als integer print geeft hij de index inplaats van de char zelf
}
*/

//opdracht 5
/*
void main() {
	int a, c;
	while (1) {
		int b = 0;

		printf("Geef een int: ");
		scanf("%d", &a);

		c = a;
		for (a = a; a > 0; a--) { // deze for loop is gewoon x!
			b = b + a;
		}
		printf("%d! = %d\n", c, b);
	}
}
*/

//opdracht 6
/*
void main() {
	int a = 0;

	while (1) {
		a++;
		if (a < 0) { //dit werkt op het feit dat als je over de max waarde gaat, de waarde negatief wordt.
			printf("OVERFLOW");
			break;
		}
	}
}
*/

//opdracht 7

//void main() {
// //wss kan dit ook zonder for loop
//	int a, b, c;
//	while (1) {
//		printf("Is het deelbaar?\nGeef twee ints, a, b: ");
//		scanf("%d, %d", &a, &b);
//
//		/*for (a = a; a >= b; a = a - b) {
//			
//		}
//
//		if ((a < b) && (a == 0)) {
//			printf("A is deelbaar door b.\n");
//		}
//		else if ((a < b) && (a > 0)) {
//			printf("A is niet deelbaar door b.\n");
//		}*/
//
//		c = a / b;
//		if ((c * b) == a) {
//			printf("A is deelbaar door b.\n");
//		}
//		else {
//			printf("A is niet deelbaar door b.\n");
//		}
//
//	}
//}

//opdracht 8

//void main() {
//	char a;
//	printf("Geef een char: ");
//	scanf("%c", &a);
//
//	if ((a == 'a') || (a == 'e') || (a == 'u') || (a == 'i') || (a == 'y') || (a == 'o') || (a == 'a')) { // niet de == vergeten
//		printf("Het gegeven char is een klinker.\n");
//	}
//	else {
//		printf("Het gegeven char is een medeklinker.\n");
//	}
//}

//opdracht 9

//void main() {
//	float a, b, c;
//
//	printf("Dit programma berekent je jaarlijkse stroomkosten\nAlle gegevens moeten in kWh gegeven worden.\nWat is je dalverbruik: ");
//	scanf("%f", &a);
//	printf("\nWat is je piekverbruik: ");
//	scanf("%f", &b);
//
//	c = (a * 0.40) + (b * 0.46) + 80;
//	printf("Je kosten zijn %.2f euro.", c);
//}

//opdracht 10

//void main() {
//	int a, i;
//	
//	while (1) {
//		printf("Geef positieve int boven 0: ");
//		scanf("%d", &a);
//		if (a <= 0) {
//			printf("Foutieve invoer. Probeer opnieuw.\n");
//		}
//		else {
//			for (i = 0; i <= a; i++) {
//				printf("De wortel van %d is %.2f\n", i, (float)sqrt(i)); //declareer dat het een float moet zijn.
//			}
//		}
//
//	}
//	
//}

//opdracht 11

//void main() {
//	int a, i;
//
//	while (1) {
//		printf("Geef positieve int boven 0: ");
//		scanf("%d", &a);
//		if (a <= 0) {
//			printf("Foutieve invoer. Probeer opnieuw.\n"); //ervoor zorgen dat er geen negatief getal kan worden ingevoerd
//		}
//		else {
//			for (i = 0; i <= a; i++) {
//				printf("De wortel van %d is %d\n", i, (int)sqrt(i)); //sqrt is de wortelfunctie
//			}
//		}
//
//	}
//
//}

//opdracht 12

//void main() {
//	int x, n;
//
//	printf("x^n.\nGeef x, n: ");
//	scanf("%d, %d", &x, &n);
//
//	printf("%d tot de macht %d is %.2f", x, n, (float)pow(x, n)); //de float veranderd het datatype en pow(x, y) doet x^y
//}

//opdracht 13

//void main() {
//	int x, y, a, b;
//	while (1) {
//		printf("Geef 2 ints x, y: ");
//		scanf("%d, %d", &x, &y);
//		
//		//Dit geeft het laatste digit van de int.
//		a = x % 10;
//		b = y % 10;
//
//		if (a == b) {
//			printf("De laatste cijfers van deze ints zijn hetzelfde.\n");
//		}
//		else {
//			printf("De laatste cijfers van deze ints zijn niet hetzelfde.\n");
//		}
//	}
//}

//opdracht 14

//void main() {
//	float a, b, c, x, z;
//	while (1) {
//		printf("ABC-Formule:\nGeef de waardes a, b, c: ");
//		scanf("%f, %f, %f", &a, &b, &c);
//
//		x = (((0-b) + (pow(b, 2) - (4 * a * c))) / (2 * a));
//		z = (((0-b) - (pow(b, 2) - (4 * a * c))) / (2 * a));
//
//		printf("De snijpunten van deze formule met de x-as zijn: %.2f en %.2f\n", x, z);
//	}
//}

//opdracht 15

//void main() {
//	int a, i, x;
//
//	while (1) {
//		printf("Geef een int van max 10: ");
//		scanf("%d", &a);
//		if (a == 0) {
//			printf("0\n");
//		}
//		else {
//			x = 1;
//			printf("x: %d\n", x);
//			for (i = 2; i <= a; i++) {
//				x = ((x * 10) + i);
//				printf("x: %d\n", x);
//			}
//		}
//	}
//}

//opdracht 16

void main() {
	int a, b =0;
	int i, x = 0, l;
	
	printf("Geef een binaire waarde: ");
	scanf("%d", &a);
	if (a == 0) {
		printf("De waarde is 0");
	}
	else {
		for (i = 0; a > 0; i++) {
			if ((a % 10) == 1) {
				b = (b + pow(2, i));
				a = (a - 1) / 10;
			}
			else {
				a = a / 10;
			}

		}
		printf("decimaal: %d\n", b);
	}
}