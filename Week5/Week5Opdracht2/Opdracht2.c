#include <stdio.h>

int som(int* arr, int length);

void main() {
	int b[10] = { 6,47,7,25,88,51,4,55,75,12 };

	for (int x = 0; x < (sizeof(b) / sizeof(b[0])); x++) {
		printf("pos: %d, waarde: %d\n", x, b[x]);
	}

	int ans = som(&b, (sizeof(b) / sizeof(b[0])));

	printf("\nSom: %d", ans);
}

int som(int* arr, int length) {
	int c = 0;
	for (int x = 0; x < length; x++) {
		int* ptr = arr + x;
		c = c + *ptr;
	}
	return c;
}