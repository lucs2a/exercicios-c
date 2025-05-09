#include <stdio.h>

void main() {
	int numConta, totalContas=0, totalDevedores=0;
	float saldoConta, saldoAgencia=0;
	char nome[30];

	printf("Digite o número da conta para inclusão ou 0 para sair\n");
	scanf("%d", &numConta);

	while(numConta>0 && totalContas<3) {
		totalContas++;

		printf("\nINCLUSÃO DE NOVO CLIENTE\n");

		printf("Nome: ");
		scanf("%s", &nome);
		printf("Saldo: ");
		scanf("%f", &saldoConta);
		saldoAgencia += saldoConta;

		printf("\n\nRESUMO\n");
		printf("%d\n%s\n", numConta, nome);

		if(saldoConta<0) {
			totalDevedores++;
			printf("saldo negativo\n\n");
		}
		else {
			printf("saldo positivo\n\n");
		}

		if(totalContas<3){
			printf("Digite o número da conta para inclusão ou 0 para sair\n");
			scanf("%d", &numConta);
		}
	}

	printf("\n\nTotal de clientes negativos: %d", totalDevedores);
	printf("\nTotal de clientes da agência: %d", totalContas);
	printf("\nSaldo da agência: R$%.2f\n\n", saldoAgencia);
}


