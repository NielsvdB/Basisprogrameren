#include <stdio.h>

void kwadrateerArray(int* arr, int length);

void main() {
	int arr[5] = { 3,9,4,5,12 };
	kwadrateerArray(arr, sizeof(arr) / sizeof(arr[0]));
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		printf("arr[%d]: %d\n", i, arr[i]);
	}
}

void kwadrateerArray(int* arr, int length) {
	for (int i = 0; i < length; i++) {
		*(arr + i) = *(arr + i) * *(arr + i);
	}
}