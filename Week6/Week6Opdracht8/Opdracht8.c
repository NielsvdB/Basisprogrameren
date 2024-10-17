#include <stdio.h>

enum dag { ma, di, wo, dd, vr, za, zo };
typedef enum dag dag;

char* Enum2String(dag werkdag) {
	char* dag[2];
	switch (werkdag) {
	case ma:
		return "maandag";
		break;
	case di:
		return "dinsdag";
		break;
	case wo:
		return "woensdag";
		break;
	case dd:
		return "donderdag";
		break;
	case vr:
		return "vrrijdag";
		break;
	case za:
		return "zaterdag";
		break;
	case zo:
		return "zondag";
		break;
	default:
		return "er niet want je hebt iets verkeerds ingevoerd.";
	}
}
void main() {
	dag weekend = 5;
	printf("De dag is: %s\n", Enum2String(weekend));

}