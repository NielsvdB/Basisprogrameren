#include <stdio.h>
#include <math.h>

fibonacci(int n, int fib, int een, int twee);

void main() {
	int n;
	printf("Geef index van fibbonacci: ");
	scanf_s("%d", &n);

	n = fibonacci(n, 0, 0, 1);
	printf("fibonacci is: %d", n);
}

fibonacci(int n, int fib, int een, int twee) {
	if (n == 0) {
		return 0;
	}
	else if(n==1){
		return 1;
	}
	else {
		fib = een + twee;
		een = twee;
		twee = fib;
		n--;
	}
	if (n > 1) {
		fib = fibonacci(n, fib, een, twee);
	}
	else {
		return fib;
	}
	

}