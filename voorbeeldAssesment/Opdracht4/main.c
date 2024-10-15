#include <stdio.h>

int berekenGemiddelde(int* arr, int length);
void main() {
	int arr[5] = { 10,10,15,20,20 };
	int gem = berekenGemiddelde(&arr, sizeof(arr) / sizeof(arr[0]));
	printf("Het gemiddelde van de getallen in de array is: %d", gem);
}

int berekenGemiddelde(int* arr, int length) {
	int som = 0;
	for (int i = 0; i < length; i++) {
		som += *(arr + i);
	}
	som = som / length;
	return som;
}