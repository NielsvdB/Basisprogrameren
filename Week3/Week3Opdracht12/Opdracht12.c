#include <stdio.h>
#include <math.h>

void main() {
	int n, l, f = 1;
	float e = 1, x = 0;

	//Input
	printf("Geef int n: ");
	scanf_s("%d", &n);
	
	//faculteit
	for (l = 2; l <= n; l++) {
		f = (f * l);
	}
	printf("Faculteit van dit getal is: %d\n", f);

	//e berekenen
	for (int k = 1; k <= n; k++) {
		f = 1;
		for (l = 2; l <= k; l++) {
			f = (f * l);
		}
		e = e + pow(f, -1);
	}
	printf("e: %f", e);

	//e^x berekenen
	f = 1;
	e = e - 1;
	for (l = 1; l <= n; l++) {
		f = (f * l);
		x = x + pow((e * f), (1 / l));
	}
	printf("\ne tot de macht x = %.2f", pow((e + 1), x));
}