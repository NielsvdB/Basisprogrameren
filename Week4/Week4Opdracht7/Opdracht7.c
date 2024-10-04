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

void main() {
	int getal;

	printf("Geef int: ");
	scanf_s("%d", &getal);
	bool res = isPriem(getal);
	if (res == 1) {
		printf("Dit is geen priemgetal.\n");
	}
	else {
		printf("Dit is een priemgetal.\n");
	}
}