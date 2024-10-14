#include <stdio.h>

enum dag { ma, di, wo, dd, vr, za, zo };
typedef enum dag dag;

char* Enum2String(dag werkdag) {
	char* dag[2];
	switch (werkdag) {
	case ma:
		return "ma";
		break;
	case di:
		return "di";
		break;
	case wo:
		return "wo";
		break;
	case dd:
		return "do";
		break;
	case vr:
		return "vr";
		break;
	case za:
		return "za";
		break;
	case zo:
		return "zo";
		break;
	default:
		return "Geen valide input.";
	}
}
void main() {
	dag weekend = di;
	printf("De dag is: %s\n", Enum2String(weekend));
	
}