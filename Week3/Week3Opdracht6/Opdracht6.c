#include <stdio.h>
#include <math.h>

void main() {
	int a = 0;

	printf("Alle even getallen tussen 0 en 200.\n");
	while (a <= 200) {
		if ((a % 2) != 0) { //% geeft de rest die over blijft nadat alle hele delingen zijn gemaakt, als deze dus niet nul is kan het niet door 2 gedeeld worden en is het oneven.
			a++;
			continue;
		}
		printf("%d\n", a);
		a++;
	}
}