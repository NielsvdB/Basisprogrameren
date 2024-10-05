#include <stdio.h>

int komtVoor(int* arr, int length, int getal);

void main() {
	int d[10] = { 22,90,3,26,58,34,34,2,19,14 }; 
	int z;
	printf("Geef int: ");
	scanf_s("%d", &z);

	int a = komtVoor(&d, (sizeof(d) / sizeof(d[0])), z);

	if (a == 1) {
		printf("Het getal %d komt voor in de array.\n", z);
	}
	else {
		printf("Het getal %d komt niet voor in de array.\n", z);
	}
}

int komtVoor(int* arr, int length, int getal) {
	for (int x = 0; x < length; x++) {
		int* ptr = arr + x;
		if (*ptr == getal) {
			return 1;
		}
	}
	return 0;
}