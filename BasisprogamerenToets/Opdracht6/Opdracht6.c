#include <stdio.h>

//prototypes:
void vul2DArray(char* p[][8], int lengte);
void print2DArray(char* p[][8], int lengte);

void main() {
	char a[8][8] = { 255 };
	vul2DArray(a, 8);
	print2DArray(a, 8);
}

void vul2DArray(char* p[][8], int lengte) {
	for (int x = 0; x < lengte; x++) {
		for (int y = 0; y < lengte; y++) {
			if (y % 2 == 0) {
				if ((x % 2) == 0) {
					p[x][y] = 219;
				}
				else {
					p[x][y] = 255;
				}
			}
			else if (y % 2 ==1) {
				if ((x % 2) == 1) {
					p[x][y] = 219;
				}
				else {
					p[x][y] = 255;
				}
			}
			else {
				p[x][y] = 255;
			}
		}
	}

}

void print2DArray(char* p[][8], int lengte) {
	for (int x = 0; x < lengte; x++) { 
		printf("\n");
		for (int y = 0; y < lengte; y++) {
			printf("%c|", p[y][x]);
		}
	}
}