/*
Construa uma programa em C que armazene 15 números em um vetor e imprima
uma listagem numerada contendo o número e uma das mensagens: par ou ímpar.
*/

#include <stdio.h>

int main(){
	int vetor[5];

	for(int i = 0; i < 5; i++) {
		printf("Insira um valor: ");
		scanf("%d", &vetor[i]);
	}

	for(int i = 0; i < 5; i++) {
		printf("%dº elemento: %d - ", i+1, vetor[i]);
		printf((int)vetor[i] % 2 == 0 ? "par\n":"impar\n");
	}






	return 0;
}
