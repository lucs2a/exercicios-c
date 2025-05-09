#include <stdio.h>

int main()
{
	int num;

	for(int i=0; i<10; i++)
	{
		printf("\ninsira um número inteiro positivo: ");
		scanf("%d", &num);

		while(num<0)
		{
			printf("\ninsira um número inteiro POSITIVO: ");
			scanf("%d", &num);
		}

		printf("quadrado de %d = %d\n", num, num*num);
	
	}





	return 0;
}
