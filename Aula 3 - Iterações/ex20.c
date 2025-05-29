#include <stdio.h>

int main()
{
	int time, cidade, flu=0, bot=0, vas=0, fla=0, out=0, qtdRJOutros=0, qtdNitFlu=0;
	float salario, mediaBot=0;

	do
	{
		printf("\nQual seu time de coração? \n1-Fluminense\n2-Botafogo\n3-Vasco\n4-Flamengo\n5-Outro\n0-Finalizar\n\n");
		scanf("%d", &time);

		//ao sair (digitar 0), printa o solicitado
		if(time == 0)
		{
			//numero de torcedores por time
			printf("\nTorcedores do Fluminense: %d\n", flu);
			printf("Torcedores do Botafogo: %d\n", bot);
			printf("Torcedores do Vasco: %d\n", vas);
			printf("Torcedores do Flamengo: %d\n", fla);
			printf("Torcedores de outros times: %d\n", out);

			if(bot == 0)
			{
				printf("Não houve torcedores do botafogo para calcular a média salarial...\n");
			}
			else
			{
				printf("Média salarial dos torcedores do botafogo: R$%.2f\n", mediaBot/bot);
			}
			
			printf("Moradores do RJ que torcem para outros times: %d\n", qtdRJOutros);

			printf("Moradores de Niterói que torcem para o FLuminense: %d\n", qtdNitFlu);

			printf("\nFinalizando...\n");
			break;
		}
		else if(time == 1)
		{
			flu += 1;
		}
		else if(time == 2)
		{
			bot += 1;
		}		
		else if(time == 3)
		{
			vas += 1;
		}
		else if(time == 4)
		{
			fla += 1;
		}
		else if(time == 5)
		{
			out += 1;
		}
		else
		{
			printf("\nOpção inválida! Encerrando...\n");
			break;
		}
		
		printf("\nOnde você mora? \n1-RJ\n2-Niterói\n3-Outra\n\n");
		scanf("%d", &cidade);

		if(cidade == 1 && time == 5)
		{
			qtdRJOutros ++;
		}

		else if(cidade == 2 && time == 1)
		{
			qtdNitFlu++;
		}

		printf("\nQual seu salário?\n");
		scanf("%f", &salario);

		if(time == 2)
		{
			mediaBot += salario;
		}

		
	} while(time != 0);

	return 0;
}

/*Uma pesquisa de opinião realizada no Rio de Janeiro, teve as seguintes perguntas:
• Qual o seu time de coração?
1-Fluminense;
2-Botafogo;
3-Vasco;
4-Flamengo;
5-Outros
• Onde você mora?
1-RJ;
2-Niterói;
3-Outros
• Qual o seu salário?
Faça um programa que imprima:
• o número de torcedores por clube;
• a média salarial dos torcedores do Botafogo;
• o número de pessoas moradoras do Rio de Janeiro, torcedores de outros
clubes;
• o número de pessoas de Niterói torcedoras do Fluminense
Obs.: O programa encerra quando se digita 0 para o time.*/
