#include <cstdio>
#include <locale.h>
#include <iostream>
#include <stdio.h>
#include <time.h>
#include <Windows.h>
#include "Header.h"

using namespace std;
int i, j;

int copyS(char *mas1, char *mas2, int size)
{
	for (i = 0; i < size; i++)
	{
		*mas2 = *mas1;
		mas1++;
		mas2++;
	}
	*mas1 = '\0';
	return 0;
}

void alf(char*str)

{

	unsigned char symb;

	int k;

	/*for (unsigned char i = 0;i <= 256;i++)

	{

	printf("%d - %c\n", (int)i, i);

	}*/

	for (int i = 224; i <= 255; i++)

	{

		k = cSymb(str, (unsigned char)i);

		if (k != 0)

		{

			if (k > 1 && k < 5)

				printf("%c - %d раза\n", (unsigned char)i, k);

			else

				printf("%c - %d раз\n", (unsigned char)i, k);

		}

	}

}