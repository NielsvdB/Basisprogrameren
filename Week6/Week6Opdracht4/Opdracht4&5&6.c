#include <stdio.h>
#include <stdint.h>

void printBinary(uint8_t n);
uint8_t BITOR(uint8_t a, uint8_t b); //voegt links een 0 toe
uint8_t BITANDINV(uint8_t a, uint8_t b); // voegt links een 0 toe
uint8_t BITTOGGLE(uint8_t a, uint8_t b);

void main() {
	uint8_t bita = b01001000;
	uint8_t bitb = 0b11110011;
	uint8_t bitc = 0b1100011;
	
	uint8_t bitd = BITOR(bita, bitb);
	printf("bitor: ");
	printBinary(bitd);

	uint8_t bite = BITANDINV(bita, bitb);
	printf("bitandinv: ");
	printBinary(bite);

	uint8_t bitf = BITTOGGLE(bita, bitb);
	printf("bittoggle: ");
	printBinary(bitf);
}

uint8_t BITOR(uint8_t a, uint8_t b) {
	return a | b;

}
uint8_t BITANDINV(uint8_t a, uint8_t b) {
	return a & ~b;
}
uint8_t BITTOGGLE(uint8_t a, uint8_t b) {
	return a ^ b;
}




void printBinary(uint8_t n) {
	int a = n;
	printf("0b");
	if (a >= 128) {
		a -= 128;
		printf("1");
	}
	else {
		printf("0");
	}
	if (a >= 64) {
		a -= 64;
		printf("1");
	}
	else {
		printf("0");
	}
	if (a >= 32) {
		a -= 32;
		printf("1");
	}
	else {
		printf("0");
	}
	if (a >= 16) {
		a -= 16;
		printf("1");
	}
	else {
		printf("0");
	}
	if (a >= 8) {
		a -= 8;
		printf("1");
	}
	else {
		printf("0");
	}
	if (a >= 4) {
		a -= 4;
		printf("1");
	}
	else {
		printf("0");
	}
	if (a >= 2) {
		a -= 2;
		printf("1");
	}
	else {
		printf("0");
	}
	if (a >= 1) {
		a -= 1;
		printf("1\n");
	}
	else {
		printf("0\n");
	}

}