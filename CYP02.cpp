// CYP02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int Pos, Tam, PosHexa, TamHexa, Cero1, Cero2;
	Cero1 = 0000,
		Cero2 = 0000;
	scanf_s("%i", &Tam);
	scanf_s("%i", &Pos);
	TamHexa = Tam;
	PosHexa = Pos;
	printf("%c%c%08X%04i%04i%08X", 66, 77, TamHexa, Cero1, Cero2, PosHexa);
	return 0;
}