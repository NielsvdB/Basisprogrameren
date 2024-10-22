#include <stdio.h>

double inverseFaculteit(int n);

void main() {
	int a = 1;
	double ans;
	ans = inverseFaculteit(a);
	printf("Antwoord: %.10lf", ans);
}

double inverseFaculteit(int n) {
	double getal = (double)n;
	for (int x = getal-1; x >= 1; x--) {
		getal = getal * x;
	}
	getal = 1 / getal;
	return getal;
}