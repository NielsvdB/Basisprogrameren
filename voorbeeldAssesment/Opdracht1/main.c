#include <stdio.h>

void main() {
	int n;
	printf("Geef een int n: ");
	scanf_s("%d", &n);
	for (n = n; n >= 0; n--) {
		printf("n is nu: %d\n", n);
	}
}
//Hij doet het.