#include <stdio.h>
#include <math.h>

void main() {
	int a;

	printf("Geef een dafdint: ");
	scanf_s("%d", &a);
	while (1) {
		if (a > 100) {
			break;
		}
		else {
			a = (a * -2);
			printf("%d\n", a);
		}
	}
}