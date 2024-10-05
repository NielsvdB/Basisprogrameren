#include <stdio.h>
void sorteer(int* arr, int length);

void main() {
	int c[10] = { 11,32,49,67,8,96,57,94,7,3 };
	for (int x = 0; x < (sizeof(c) / sizeof(c[0])); x++) {
		printf("index: %d, waarde: %d\n", x, c[x]);
	}

	sorteer(&c, sizeof(c) / sizeof(c[0]));

	printf("===============================================\nOp volgorde van klein naar groot: \n");
	for (int x = 0; x < (sizeof(c) / sizeof(c[0])); x++) {
		printf("index: %d, waarde: %d\n", x, c[x]);
	}
}

void sorteer(int* arr, int length) {
	while (1) {
		int cnt = 0;
		for (int x = 0; x < length; x++) {
			int* ptr = arr + x;
			int* vorigeptr = arr + x - 1;
			if (*ptr < *vorigeptr) {
				int placeholder = *ptr;
				*ptr = *vorigeptr;
				*vorigeptr = placeholder;
				cnt++;
			}
			
		}
		if (cnt == 0) {
			break;
		}
	}
}