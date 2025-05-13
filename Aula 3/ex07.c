/*Crie um programa em linguagem C que permita entrar com o nome, a nota da
prova 1 e da prova 2 de 15 alunos. Ao final, imprimir uma listagem, contendo:
nome, nota da prova 1, nota da prova 2, e média das notas de cada aluno. Ao final,
imprimir a média geral da turma.*/

#include <stdio.h>

int main()
{
	char nome[100];
	float nota1, nota2, media, mediatotal=0;

	//iteração para 5 alunos
	for(int i=0; i<5; i++)
	{
		if(i==0) //condição para não usar o getchar() na primeira iteração pois comeria a primeira letra, pq o buffer de entrada está vazio
		{
			printf("\ninsira seu nome:\n");
			fgets(nome, 100, stdin);
		}
		
		else //aqui entram os casos onde o último scanf() deixa um \n no buffer, fazendo o fgets não ler a entrada do usuario
		{
			printf("\ninsira seu nome:\n");
			getchar(); //função para retirar o \n deixado pelo último scanf()
			fgets(nome, 100, stdin);
		}
		
		printf("\ninsira a nota da prova 1:\n");
		scanf("%f", &nota1);

		printf("\ninsira a nota da prova 2:\n");
		scanf("%f", &nota2);

		//para imprimir a média do aluno e também adicionar na variável da média da turma
		media = (nota1+nota2)/2;

		printf("\nnome: %sp1: %.1f\np2: %.1f\nmédia: %.1f\n", nome, nota1, nota2, media);
		mediatotal += media;
	}
	printf("\nmédia da turma: %.1f\n\n", mediatotal/5);

	return 0;
}
