#include <stdio.h>
#include <math.h>

void Swap(int n) {
	int rem[64], cnt = 0, res = 0;
	while (n > 0) {
		rem[cnt] = n % 10;
		/*printf("rem: %d\n", rem[cnt]);*/
		n = floor(n / 10);
		cnt++;
	}
	for (int t = cnt; t > 0; t--) {
		res = res + (rem[cnt - t] * pow(10, t-1));
	}
	printf("Result: %d\n", res);
}

void main() {
	while (1) {
		int ne;
		printf("Geef int: ");
		scanf_s("%d", &ne);
		Swap(ne);
	}
	
}