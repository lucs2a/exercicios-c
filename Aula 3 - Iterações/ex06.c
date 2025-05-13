#include <stdio.h>

int main()
{
	int i, termo1=1, termo2=1, proximo;

	printf("\nOs 20 primeiros termos da sequência de Fibonacci:\n");

	printf("%d, %d", termo1, termo2);

	for(i=3; i<=20; i++)
	{
		proximo = termo1 + termo2;
		printf(", %d", proximo);
		termo1 = termo2;
		termo2 = proximo;
	}
	printf("\n\n");

	return 0;
}
