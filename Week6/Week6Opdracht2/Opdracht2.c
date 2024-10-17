#include <stdio.h>
#include <stdint.h>

void printBinary(uint8_t n);

void main() {
	uint8_t BIT0 = 0b00000001;
	uint8_t BIT1 = 0b00000010;
	uint8_t BIT2 = 0b00000100;
	uint8_t BIT3 = 0b00001000;
	uint8_t BIT4 = 0b00010000;
	uint8_t BIT5 = 0b00100000;
	uint8_t BIT6 = 0b01000000;
	uint8_t BIT7 = 0b10000000;

	printBinary(BIT0);
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