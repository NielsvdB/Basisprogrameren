#include <stdio.h>

void bits(int x);
void binair(int bin);

enum dag{ma = 5, di, wo, dd, vr, za, zo};
typedef enum dag dag;

void main()
{
	dag werkdag = ma + 5;
	printf("De dag is: %d\n", vr);
	int bin = 12;

	binair(12);

	printf("Het getal is: %d\n", bin);
	printf("Het getal is: %d\n", ~bin);
	printf("Het getal is: %d\n", bin << 1);
	printf("Het getal is: %d\n", bin >> 1);
	printf("\n");

	bin |= 2;
	printf("Het getal na operatie (or) is: %d\n", bin);

	bin = 15;
	bin &= 11;
	printf("Het getal na operatie (and) is: %d\n", bin);

	bin = 11;
	bin ^= 5;
	printf("Het getal na operatie (xor) is: %d\n", bin);
}

void bits(int x)
{
	for (int i = sizeof(x) << 3; i; i--)
		putchar('0' + ((x >> (i - 1)) & 1));
}

void binair(int bin)
{
	printf("Het binaire getal is: ");
	bits(bin);
	printf("\n");

	printf("Het inverse getal is: ");
	bits(~bin);
	printf("\n\n");

	printf("Het shift(L) getal  : ");
	bits(bin << 1);
	printf("\n\n");

	printf("Het shift(R) getal  : ");
	bits(bin >> 1);
	printf("\n\n");

	printf("Het getal voor operatie (or) is :");
	bits(bin);
	printf("\n");
	bin |= 2; //makkelijk een bitje 1 zetten.
	printf("Het getal na   operatie (or) is :");
	bits(bin);
	printf("\n\n");

	bin = 15;
	printf("Het getal voor operatie (and) is:");
	bits(bin);
	printf("\n");

	bin &= 11; //makkelij bitje 0 zetten
	printf("Het getal na   operatie (and) is:");
	bits(bin);
	printf("\n\n");

	bin = 11;
	printf("Het getal voor operatie (xor) is:");
	bits(bin);
	printf("\n");
	bin ^= 5; //selectief bitjes zetten.
	printf("Het getal na   operatie (xor) is:");
	bits(bin);
	printf("\n\n");
}

/*
twee complementsoperatie
2
=
010 -> 1 complement flip alle bitjes
101
101 -> twee complement een bitje rechts bij op
110
= -2

54
00110110
11001001
11001010
signed:
het eerste bit (negatief) - de bitjes er naast
*/