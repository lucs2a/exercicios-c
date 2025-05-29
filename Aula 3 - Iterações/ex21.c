#include <stdio.h>

int main()
{
	float rendaPes, rendaFam, totalAli, totalOut;
	int aluOut=0, aluRen=0, qtdAlunos=0;

	printf("\nDigite a renda pessoal ou 0 para terminar\nR$");
	scanf("%f", &rendaPes);

	while(rendaPes != 0)
	{
		qtdAlunos++;
		printf("\nDigite a renda familiar\nR$");
		scanf("%f", &rendaFam);
		if(rendaPes > rendaFam)
		{
			aluRen++;
		}

		printf("\nDigite o total gasto com alimentação\nR$");
		scanf("%f", &totalAli);
		

		printf("\nDigite o total gasto com outras despesas\nR$");
		scanf("%f", &totalOut);
		if(totalOut > 200)
		{
			aluOut++;
		}

		printf("\nPorcentagem gasta com alimentação em relação à renda pessoal: %.1f%%", (totalAli * 100) / rendaPes);
		printf("\nPorcentagem gasta com alimentação em relação à renda familiar: %.1f%%", (totalAli * 100) / rendaFam);
		printf("\nPorcentagem gasta com outras despesas em relação à renda pessoal: %.1f%%", (totalOut * 100) / rendaPes);
		printf("\nPorcentagem gasta com outras despesas em relação à renda familiar: %.1f%%\n", (totalOut * 100) / rendaFam);

		printf("\nDigite a renda pessoal ou 0 para terminar\nR$");
		scanf("%f", &rendaPes);
	}


	float porcAlu = (aluOut * 100) / qtdAlunos;
	printf("\nPorcentagem de alunos que gastam acima de R$200,00 com outras despesas: %.1f%%", porcAlu);
	printf("\nNúmero de alunos com renda pessoal maior que a renda familiar: %d\n\n", aluRen);


	return 0;
}

/*Em uma universidade cada aluno possui os seguintes dados:
• Renda pessoal;
• Renda familiar;
• Total gasto com alimentação;
• Total gasto com outras despesas;
Faça um programa que imprima a porcentagem dos alunos que gasta acima de
R$200,00 com outras despesas. O número de alunos com renda pessoal maior
que a renda familiar e a porcentagem gasta com alimentação e outras despesas
em relação às rendas pessoal e familiar.
Obs.: O programa encerra quando se digita 0 para a renda pessoal.*/
