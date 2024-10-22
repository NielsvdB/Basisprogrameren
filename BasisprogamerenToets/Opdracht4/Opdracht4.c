#include <stdio.h>

int arrayProduct(int a[], int length);

void main() {
	int a[5] = { 1,2,3,4,5 };
	int b[5] = { 6,7,8,9,10 };

	int ans = arrayProduct(b, sizeof(b) / sizeof(b[0]));
	printf("Antwoord: %d", ans);
}

int arrayProduct(int a[], int length) {
	int product = 1;
	for (int x = 0; x < length; x++) {
		product *= a[x];
	}
	return product;
}