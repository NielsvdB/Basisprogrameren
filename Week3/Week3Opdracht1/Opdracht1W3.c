#include <stdio.h>
#include <math.h>

void main() {
	int a;
	
	printf("Geef een int: ");
	scanf_s("%d", &a);

	if (a > 0) {
		printf("Groter dan 0\n");
	}
	else {
		printf("Kleiner of gelijk aan 0.\n");
	}
}