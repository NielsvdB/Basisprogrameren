#include <stdio.h>

void main() {
	int a, b, c;
	printf("Geef 3 ints: a, b, c: ");
	scanf_s("%d, %d, %d", &a, &b, &c);

	if (a > b && a > c) {
		printf("%d\n", a);
		if (b > c) {
			printf("%d\n", b);
			printf("%d\n", c);
		}
		else {
			printf("%d\n", c);
			printf("%d\n", b);
		}
	}
	if (b > a && b > c) {
		printf("%d\n", b);
		if (a > c) {
			printf("%d\n", a);
			printf("%d\n", c);
		}
		else {
			printf("%d\n", c);
			printf("%d\n", a);
		}
	}
	if (c > b && c > a) {
		printf("%d\n", c);
		if (b > a) {
			printf("%d\n", b);
			printf("%d\n", a);
		}
		else {
			printf("%d\n", a);
			printf("%d\n", b);
		}
	}
	if (a == b && b == c) {
		printf("%d\n", a);
		printf("%d\n", b);
		printf("%d\n", c);
	}
}