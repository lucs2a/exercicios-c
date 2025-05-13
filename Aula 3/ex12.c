/*Dado um país A, com 5 milhões de habitantes e uma taxa de natalidade de 3% ao
ano, e um país B com 7 milhões de habitantes e uma taxa de natalidade de 2% ao
ano, fazer um programa que calcule e imprima o tempo necessário para que a
população do país A ultrapasse a população do país B.*/

#include <stdio.h>

int main()
{
	int popA=5000000, popB=7000000, anos=0;

	while(popA < popB)
	{
		anos++;
		popA *= 1.03;
		popB *= 1.02;
	}

	printf("foram necessários %d anos para a população do país A ultrapassar a do país B\n", anos);
	
	
	return 0;
}
