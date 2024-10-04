#include <stdio.h>
#include <math.h>

void main() {
	int getal, a, cnt = 0;

	printf("geef een int waarvan je wilt checken of het een priemgetal is: ");
	scanf_s("%d", &getal);

	for (a = 1; a <= getal; a++) {
		if ((getal % a) == 0) {
			cnt++;
		}
	}

	if (cnt > 2) {
		printf("\nDit is niet een priemgetal.\n");
	}
	else {
		printf("\nDit is een priemgetal.\n");
	}
}