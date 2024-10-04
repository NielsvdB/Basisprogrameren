#include <stdio.h>
#include <math.h>

void main() {
	while (1) {
		int jaar;
	
		printf("\nGeef een jaartal < 2000 A.C. en >= 0: ");
		scanf_s("%d", &jaar);
		printf("Dit jaar is in romeinse nummers: ");

		if (jaar == 2000) {
			printf("MM");
			jaar = (jaar - 2000);
		}
		if ((jaar >= 1900) && (jaar < 2000)) {
			printf("MCM");
			jaar = (jaar - 1900);
		}
		if ((jaar >= 1400) && (jaar < 1500)) {
			printf("MCD");
			jaar = (jaar - 1400);
		}
		if ((jaar >= 90) && (jaar < 100)) {
			printf("XC");
			jaar = jaar - 90;
		}
		if ((jaar >= 40) && (jaar < 50)) {
			printf("XL");
			jaar = jaar - 40;
		}
		if (jaar == 9) {
			printf("IX");
			jaar = jaar - 9;
		}
		if (jaar == 4) {
			printf("IV");
			jaar = jaar - 4;
		}
		while (jaar > 0) {
			if (jaar >= 1000) {
				printf("M");
				jaar = jaar - 1000;
			}
			if (jaar >= 500) {
				printf("D");
				jaar = jaar - 500;
			}
			if (jaar >= 100) {
				printf("C");
				jaar = jaar - 100;
			}
			if ((jaar >= 50) && (jaar < 100)) {
				printf("L");
				jaar = jaar - 50;
			}
			if ((jaar >= 10) && (jaar < 100)) {
				printf("X");
				jaar = jaar - 10;
			}
			if ((jaar >= 5) && (jaar < 10)) {
				printf("V");
				jaar = jaar - 5;
			}
			if ((jaar >= 1) && (jaar < 10)) {
				printf("I");
				jaar = jaar - 1;
			}
		}
	}
}