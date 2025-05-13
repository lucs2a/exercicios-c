/*Faça um programa que leia vários números inteiros e apresente o fatorial de cada
número. O algoritmo encerra quando se digita um número menor do que 1.*/

#include <stdio.h>

int main() {
	int num;
	
	printf("\nInsira um inteiro positivo para ver seu fatorial ou 0 para sair: ");
	scanf("%d", &num);

	while(num != 0 && num > 0) {
		int fat=1;
		
		for(int i = num; i > 1; i--){
			fat *= i;
		}
		printf("fatorial de %d = %d", num, fat);

		printf("\nInsira um inteiro positivo para ver seu fatorial ou 0 para sair: ");
		scanf("%d", &num);
	}
	
	return 0;
}
