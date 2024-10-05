#include <stdio.h>

int maximum(int* arr, int length);

void main() {
	int d[10] = { 22,90,3,26,58,34,34,2,19,14 };
	for (int x = 0; x < (sizeof(d) / sizeof(d[0])); x++) {
		printf("index: %d, waarde %d\n", x, d[x]);
	}

	int ans = maximum(&d, sizeof(d) / sizeof(d[0]));
	
	printf("=============================================\nHet grootste getal uit deze array is: %d", ans);
}

int maximum(int* arr, int length) {
	int max = 0;
	for (int x = 0; x < length; x++) {
		int* ptr = arr + x;

		if (*ptr > max) {
			max = *ptr;
		}
	}
	return max;
}