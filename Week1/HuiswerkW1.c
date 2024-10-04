#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846
//opdracht 1
/*
void main()
{
	//variabelen aanroepen
	float leeftijdJ = 0;
	
	printf("Dit programma berekent je leeftijd in maanden.\n Voer leeftijd in jaren in: ");
	scanf("%f", &leeftijdJ);
	printf("Jouw leeftijd in maanden is: %.2f", (leeftijdJ * 12));

}
*/


//opdracht 2
/*
void main() {
	float een = 0;
	float twee = 0;
	float drie = 0;
	float gem = 0;

	printf("Syntax: a, b, c \nVoer 3 getallen in: ");
	scanf("%f, %f, %f", &een, &twee, &drie);

	gem = ((een + twee + drie) / 3);
	printf("Het gemiddelde van deze drie getallen is: %.2f", gem);
}
*/

//opdracht 3
/*
void main() {
	float a = 0;
	float b = 0;

	printf("Syntax: a, b \nVoer 2 getallen in: ");
	scanf("%f, %f", &a, &b);

	if (a > b) {
		printf("Nummer %.2f is groter dan nummer %.2f.", a, b);
	}
	else if (a == b) {
		printf("Nummer %.2f en %.2f zijn even groot.", a, b);
	}
	else if(a < b){
		printf("Nummer %.2f is groter dan nummer %.2f.", b, a);
	}

}
*/

//opdracht 4
/*
void main() {
	float a = 0;
	float b = 0;
	float c = 0;

	printf("Syntax: a, b, c \nVoer 3 getallen in: ");
	scanf("%f, %f, %f", &a, &b, &c);

	if ((a > b) && (a > c)) {
		printf("Nummer %.2f is groter dan nummer %.2f en %.2f.", a, b, c);
	}
	else if ((b > a) && (b > c)) {
		printf("Nummer %.2f is groter dan nummer %.2f en %.2f.", b, a, c);
	}
	else if ((c > a) && (c > b)) {
		printf("Nummer %.2f is groter dan nummer %.2f en %.2f.", c, a, b);
	}
}
*/

//opdracht 5
/*
void main() {
	int a, b;

	printf("Syntax: a, b.\nGeef twee ints: ");
	scanf("%d, %d", &a, &b);

	if (a == b) {
		printf("\nDeze waarden zijn gelijk aan elkaar.");
	}
	else {
		printf("\nDeze waarden zijn niet gelijk aan elkaar.");
	}
}
*/

//opdracht 6
/*
void main() {
	float a;

	printf("Geef een float: ");
	scanf("%f", &a);
	printf("De waarde die je hebt ingevult is met 4 decimalen: %.4f", a);
}
*/

//opdracht 7
/*
void main() {
	float rad, opp, omt;

	printf("Geef de radius van een cirkel: ");
	scanf("%f", &rad);

	opp = ((rad * rad) * M_PI);
	omt = (2 * M_PI * rad);

	printf("De oppervlakte van deze cirkel is %.4f en de omtrek is %.4f", opp, omt);
}
*/

//opdracht 8
/*
void main() {
	float exc, inc;

	printf("Geef prijs exclusief btw: ");
	scanf("%f", &exc);

	inc = (exc * 1.21);

	printf("De prijs inclusief btw is: %.2f", inc);
}
*/

//opdracht 9
/*
void main() {
	float kmh, ms;

	printf("Geef een snelheid in km/h: ");
	scanf("%f", &kmh);

	ms = (kmh / 3.6);
	printf("De snelheid is %.2f m/s.", ms);
}
*/

//opdracht 10
/*
void main() {
	// I = U/R
	float u, r, i;
	
	printf("Syntax: 'spanning, weerstand'\nGeef de spanning in volt over en de weerstand in ohm van een component: ");
	scanf("%f, %f", &u, &r);

	i = (u / r);
	printf("De stroom door dit component is %.2f ampere.", i);
}
*/

//opdracht 11
/*
void main() {
	float a, b, i;
	int j = 0;


	printf("syntax: 'a, b'.\n vul in a/b: ");
	scanf("%f, %f", &a, &b);

	for (i = a; i >= b; j++) {
		i = (i - b);
	}
	printf("%.4f / %.4f = %d rest %.4f", a, b, j, i);


}
*/

//opdracht 12

void main() {
	while (1) {
		int sec = 0;
		int min = 0;
		int uur = 0;
		int inp = 0;

		
		printf("\nVoer een aantal seconden in: ");
		scanf("%i", &inp);

		for (sec = inp; sec >= 60; min++) {
			sec = (sec - 60);
		}
		for (min = min; min >= 60; uur++) {
			min = (min - 60);
		}
		//printf("Dit zijn %d uren, %d minuten en %d seconden.", uur, b, a);
		printf("sec: %d\nmin : %d\nuur : %d\ninp: %i\n", sec, min, uur, inp);
	}
}


//opdracht 13
/*
void main() {
	float a;

	printf("voer getal in: ");
	scanf("%f", &a);
	a = pow(a, 2);
	printf("Het kwadraat van dit getal is: %.2f", a);
}
*/

//opdracht 14
/*
void main() {
	while (1) {
		float a, b;

		printf("\nTot welke macht wil je verheffen: ");
		scanf("%f", &b);

		printf("voer getal in: ");
		scanf("%f", &a);

		a = pow(a, b);
		printf("Het antwoord is: %.2f", a);
	}
}

*/