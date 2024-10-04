#include <stdio.h>
#include <math.h>

int Aantalkeer(n) {
	n++;
	return n;
}
void main() {
	int n = 0;
	while (1) {
		char input;
		printf("type x om te eindigen: ");
		scanf_s("%c", &input);
		if (input == 'x') {
			break;
		}

		n = Aantalkeer(n);
		printf("n = %d\n", n);
	}
	
}