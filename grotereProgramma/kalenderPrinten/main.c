//===============================================================Includes
#include <stdio.h>
#include <math.h>

//================================================================Functie prototypes
int CheckSchrikkel(int y);
int schrikkelDagen(int d1, int m1, int y1, int d2, int m2, int y2);
int eersteWeekDagMaand(int m, int y);
void vulMaandArray(int m, int y, int* maand);
void printMaand(int* maand, int length, int maandnr);
void MaandKalender(int maand, int jaar);
void JaarKalender(int Jaar);
//================================================================Main Loop.
void main() { 
	int input;
	printf("Geef een jaar waarvan je de kalender wilt zien: ");
	scanf_s("%d", &input);
	JaarKalender(input);
}

//=====================================================================Functies
int CheckSchrikkel(int y) { //Check of een jaar een schrikkeljaar is.
	if (((y%4)==0) && (((y%100) != 0) || ((y%400) ==  0))) {// alle jaren deelbaar door vier maar niet deelbaar door 100 tenzij ook door 400 zijn schrikkeljaren
		return 1;
	}
	else {
		return 0;
	}
}

int schrikkelDagen(int d1, int m1, int y1, int d2, int m2, int y2) {// Hoeveel schrikkeldagen zit er tussen deze twee data(vanaf begin dag gerekend)
	int count = 0;
	if (m1 < 3 && CheckSchrikkel(y1) == 1 && y1 != y2) {//moet het eerste jaar meegerekent worden?
			count++;
	}
	if ((m2 >= 3 || (d2 > 28 && m2 == 2)) && (CheckSchrikkel(y2) == 1) && (y1 != y2)) {//Moet het laatste jaar meegerekent worden
			count++;
	}
	for (int i = (y1 + 1); i < y2; i++) {// alle overige jaren
		if (CheckSchrikkel(i) == 1) {
			count++;
		}
	}
	
	return count;
}

int eersteWeekDagMaand(int m, int y) {
	int verschilD = 0; //Hoeveel dagen er zitten tussen 01-01-2000 en 1-m-y
	static int aantalDagen[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; //array met aantal dagen in een maand

	int verschilY = abs(2000 - y);
	verschilD = (verschilY * 365); //aantal dagen verschil per heel jaar verschil
	verschilD += schrikkelDagen(1, 1, 2000, 1, m, y); //aantal schrikkeldagen tussen de 2 data
	
	for (int i = 0; i < (m-1); i++) {// loop die voor de overige maanden het aantal dagen dat er tussen de data inzit bij optelt.
		verschilD += aantalDagen[i];
	}

	return ((5 + verschilD) % 7);//som die van verschil naar dagen de goede dag kan uitrekenen
}

void vulMaandArray(int m, int y, int* maand) {//vult array met data van gewilde maand
	int beginDag = eersteWeekDagMaand(m, y);
	static int aantalDagen[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; //array met aantal dagen in een maand
	
	if (m == 2 && CheckSchrikkel(y) == 1) {// Het zetten van een schrikkelmaand. Het enige verschil is het getal 29 in plaats van 28 uit de array
		for (int i = (beginDag + 1); (i - beginDag) <= 29; i++) {
			int* ptr = maand + (i - 1);
			*ptr = (i - beginDag);
		}
	}
	else { //zetten van alle andere maanden
		for (int i = (beginDag + 1); (i - beginDag) <= aantalDagen[m-1]; i++) {
			int* ptr = maand + (i - 1);
			*ptr = (i - beginDag);
		}
	}
	
}

void printMaand(int* maand, int length, int maandnr) {
	static char c[12][4] = { "Jan", "Feb", "Mrt", "Apr", "Mei", "Jun", "Jul", "Aug", "Sep", "Okt", "Nov", "Dec" };//Alle maanden in een array
	printf("        ");
	for (int i = 0; i < 4; i++) {
		printf("%c", c[maandnr-1][i]);//Print de goede maand boven de kalender
	}

	printf("\nMA DI WO DO VR ZA ZO\n---------------------\n");
	for (int i = 1; i <= 42; i++) {
		if (*maand == 0) {
			printf("   ");
		}
		else {
			if (*maand < 10) {
				printf("%d  ", *maand);
			}
			else {
				printf("%d ", *maand);
			}
			
		}
		if ((i % 7) == 0 && i!=0) {
			printf("|\n");
		}
		maand++;
	}
	printf("---------------------\n\n");
}

void MaandKalender(int maand, int jaar) {
	int maandArray[42] = { 0 };
	vulMaandArray(maand, jaar, &maandArray);
	printMaand(&maandArray, 42, maand);
}

void JaarKalender(int Jaar) {
	printf("===========================================\n        %d\n", Jaar);
	for (int i = 1; i <= 12; i++) {
		MaandKalender(i, Jaar);
	}
}