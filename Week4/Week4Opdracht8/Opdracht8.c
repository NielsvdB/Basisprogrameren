#include <stdio.h>
#include <stdbool.h>

bool isPriem(int n) {
	int cnt = 0;
	for (int a = 1; a <= n; a++) {
		if (n % a == 0) {
			cnt++;
		}
	}
	if (cnt > 2) {
		return 1;
	}
	else {
		return 0;
	}
}

int priemSom(int n) {
	int som = 0;
	int x;
	for (x = 1; x <= n; x++) {
		if (isPriem(x) == 0) {
			som += x;
		}
	}
	return x;
}

void main() {
	int getal;

	printf("Geef int: ");
	scanf_s("%d", &getal);
	
	getal = priemSom(getal);
	printf("De som van alle priemgetallen tussen 0 en de gegeven int is: %d", getal);
	
}