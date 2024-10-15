#include <stdio.h>
#include <math.h>

void draaiom(int* arr, int length);

void main() {
	int arr[6] = { 1,2,3,4,5,6 };
	draaiom(arr, sizeof(arr)/ sizeof(arr[0]));

	for (int i = 0; i < sizeof(arr)/ sizeof(arr[0]); i++) {
		printf("arr[%d]: %d\n", i, arr[i]);
	}
}

void draaiom(int* arr, int length) {
	int helft = floor(length / 2);
	for (int i = 0; i < helft; i++) {
		int placeholder = *(arr + i);
		*(arr + i) = *(arr + length - i-1);
		*(arr + length - i-1) = placeholder;
	}
}