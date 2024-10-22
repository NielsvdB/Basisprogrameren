#include <stdio.h>
#include <math.h>

void draaiOm(int* p, int lengte);

void main() {
	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int b[10] = { 9,8,7,6,5,4,3,2,1,0 };

	draaiOm(a, 10);
	for (int x = 0; x < 10; x++) {
		printf("%d", a[x]);
	}
}

void draaiOm(int* p, int lengte) {
	int helft = floor(lengte / 2);
	
	for (int i = 0; i < helft; i++) {
		int placeholder = *(p + i);
		*(p + i) = *(p + lengte - i - 1);
		*(p + lengte - i - 1) = placeholder;
	}
	
	
}