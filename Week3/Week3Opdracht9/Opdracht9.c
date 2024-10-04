#include <stdio.h>
#include <math.h>

void main() {
	int in, fib, ite, a = 0, b = 1;
	printf("Geef een index waarvan je de het fibonacci-getal van wilt weten: ");
	scanf_s("%d", &in);

	/*fib = (in / (1 - in - pow(in, 2)));

	printf("Het getal van fibonacci dat bij deze index hoort is: %d\n", fib);*/

	if (in == 0) {
		printf("Het fibonacci getal is: 0");
	}
	else if (in == 1) {
		printf("Het fibonacci getal is: 1");
	}
	else {
		for (ite = 2; ite <= in; ite++) {
			fib = a + b;
			a = b;
			b = fib;
		}
	}
	printf("Het getal van fibonacci dat bij deze index hoort is %d", fib);
}