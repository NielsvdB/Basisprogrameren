#include <stdio.h>
#include <math.h>

void kwadrateer(int* arr, int length);

void main() {
	int data[10] = {4, 22, 1, 22, 3, 5, 73, 12, 33, 1};
	for (int x = 0; x < (sizeof(data) / sizeof(data[0])); x++) {
		printf("Index: %d, waarde: %d\n", x, data[x]);
	}

	kwadrateer(&data, (sizeof(data) / sizeof(data[0])));

	printf("\n");
	for (int x = 0; x < (sizeof(data) / sizeof(data[0])); x++) {
		printf("Index: %d, waarde: %d\n", x, data[x]);
	}
}

void kwadrateer(int *arr, int length) {
	for (int x = 0; x < length; x++) {
		int *z = arr + x;
		*z = pow(*z, 2);
	}
}