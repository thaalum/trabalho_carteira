#include <stdio.h>

void main()
{
	struct data
	{
		int dia;
		int mes;
		int ano;
	};
	struct carteira
	{
		char tipo;
		int valor;
		struct data;
	};
	int opcao_escolhida;
	carteira v[9999];
	int posicao_vector=0;
	printf("1 - INSERIR REGISTO NOVO\n");
	printf("2 - LISTAR DESPESAS\n");
	printf("3 - LISTAR RECEITAS\n");
	printf("4 - EDITAR REGISTO\n");
	printf("5 - APRESENTAR MEDIA DE DESPESAS\n");
	printf("6 - APRESENTAR MEDIA DE RECEITAS\n");
	printf("7 - APRESENTAR SALDO ACTUAL\n");
	printf("8 - DESPESAS POR DATA\n");
	printf("9 - RECEITAS POR DATA\n");
	printf("10 - DESPESAS ACIMA DE:\n");
	printf("11 - RECEITAS ACIMA DE:\n");
	printf("12 - SAIR\n");
	printf("ESCOLHA UMA OPCAO: ");
	scanf_s("%d",&opcao_escolhida);
	while(opcao_escolhida!=12)
	{
		if(opcao_escolhida==1)
		{
			printf("Despesa (d) ou receita (r)? ");
			scanf_s("%c", v[posicao_vector].tipo );
			if (v[posicao_vector].tipo == 'd')
			{
				printf("\n Insira, a data de hoje: ");
				printf("\n Dia:");
				scanf_s("%d", &v[posicao_vector].data.dia);
				printf("\n M�s:");
				scanf_s("%d", &v[posicao_vector].data.mes);
				printf("\n Ano:");
				scanf_s("%d", &v[posicao_vector].data.ano);
			}
		}
	}


}