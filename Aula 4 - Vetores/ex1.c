/*
Faça um programa em C que armazene 15 números inteiros em um vetor e depois
permita que o usuário digite um número inteiro para ser buscado no vetor, se
for encontrado o programa deve imprimir a posição desse número no vetor, caso
contrário, deve imprimir a mensagem: "Nao encontrado!".
*/

#include <stdio.h>

int main() {
	int lista[15], buscar;

	for(int i = 0; i < 15; i++) {
		printf("Insira um numero: ");
		scanf("%d", &lista[i]);
	}


	do {
		printf("Busque por um numero na lista (0 para sair): ");
		scanf("%d", &buscar);

		if(buscar == 0) break;
		int encontrado = 0;

		for(int i = 0; i < 15; i++) {
			if(lista[i] == buscar) {
				printf("Numero encontrado na posição %d\n", i);
				encontrado++;
				break;
			}
		}
		if(!encontrado) {
			printf("Numero não encontrado\n");
		}
	} while(buscar != 0);

	return 0;
}
