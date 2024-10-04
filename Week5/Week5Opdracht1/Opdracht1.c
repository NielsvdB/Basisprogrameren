#include <stdio.h>

void kwadrateer(int* arr[], int length);

void main() {
	int data[10] = {4, 22, 1, 22, 3, 5, 73, 12, 33, 1};
	for (int x = 0; x < (sizeof(data) / sizeof(data[0])); x++) {
		printf("Index: %d, waarde: %d\n", x, data[x]);
	}

	kwadrateer(&data, (sizeof(data) / sizeof(data[0])));

	for (int x = 0; x < (sizeof(data) / sizeof(data[0])); x++) {
		printf("Index: %d, waarde: %d\n", x, data[x]);
	}
}

void kwadrateer(int *arr[], int length) {
	for (int x = 0; x <= length; x++) {
		*arr[x] = *arr[x] * *arr[x];
	}
}