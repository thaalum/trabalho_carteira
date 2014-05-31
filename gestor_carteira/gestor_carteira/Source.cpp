#include <stdio.h>
#include <iostream>
using namespace std;

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
		float valor;
		struct data data1;
	};
	int opcao_escolhida;
	carteira v[9999];
	int posicao_vector = 0;
	cout << "1 - INSERIR REGISTO NOVO\n";
	cout << "2 - LISTAR DESPESAS\n";
	cout << "3 - LISTAR RECEITAS\n";
	cout << "4 - EDITAR REGISTO\n";
	cout << "5 - APRESENTAR MEDIA DE DESPESAS\n";
	cout << "6 - APRESENTAR MEDIA DE RECEITAS\n";
	cout << "7 - APRESENTAR SALDO ACTUAL\n";
	cout << "8 - DESPESAS POR DATA\n";
	cout << "9 - RECEITAS POR DATA\n";
	cout << "10 - DESPESAS ACIMA DE:\n";
	cout << "11 - RECEITAS ACIMA DE:\n";
	cout << "12 - SAIR\n";
	cout << "ESCOLHA UMA OPCAO: ";
	cin >> opcao_escolhida;
	switch (opcao_escolhida)
	{
		case 1:
		{
			cout << "Despesa d ou receita r: \n";
			cin >>  v[posicao_vector].tipo;
			
			
			
			cout << "\n Insira, a data de hoje: ";
			cout << "\n Dia:";
			cin >>  v[posicao_vector].data1.dia;
			cout << "\n Mes:";
			cin >> v[posicao_vector].data1.mes;
			cout << "\n Ano:";
			cin >>  v[posicao_vector].data1.ano;
		}
	}

}
	

