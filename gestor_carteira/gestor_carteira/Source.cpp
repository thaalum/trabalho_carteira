#include <stdio.h>
#include <iostream>
using namespace std;
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
int posicao_vector = 0;
carteira v[9999];
void menu();
void opcao1();
void opcao2();
void opcao3();
void opcao4();
void opcao5();
void opcao6();
void opcao7();
void opcao8();
void opcao9();
void opcao10();
void opcao11();
void opcao12();

void main()
{
	int opcao_escolhida;
	menu();
	cin >> opcao_escolhida;
	while (opcao_escolhida != 12)
	{
		switch (opcao_escolhida)
		{
			case 1: opcao1(); break;
			case 2: opcao2(); break;
			case 3: opcao3(); break;
			case 5: opcao5(); break;
			menu();
			cin >> opcao_escolhida;
		};
	};
};






void menu()
{
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
};

void opcao1()
{
	cout << "Despesa (d) ou receita (r): ";
	cin >> v[posicao_vector].tipo;
	cout << "Valor:";
	cin >> v[posicao_vector].valor;
	cout << "\n Insira, a data de hoje: ";
	cout << "\n Dia:";
	cin >> v[posicao_vector].data1.dia;
	cout << "\n Mes:";
	cin >> v[posicao_vector].data1.mes;
	cout << "\n Ano:";
	cin >> v[posicao_vector].data1.ano;
	posicao_vector++;
};

void opcao2()
{
	int i;
	for (i = 0; i <= posicao_vector; i++)
	{
		if (v[i].tipo == 'd')
			cout << "Numero de registo:" << i << "\n Quantia:" << v[i].valor << "\n Data:" << v[i].data1.dia << "  " << v[i].data1.mes << "  " << v[i].data1.ano << "\n \n";
	};
};

void opcao3()
{
	int i;
	for (i = 0; i <= posicao_vector; i++)
	{
		if (v[i].tipo == 'r')
			cout << "Numero de registo:" << i << "\n Quantia:" << v[i].valor << "\n Data:" << v[i].data1.dia << "  " << v[i].data1.mes << "  " << v[i].data1.ano << "\n \n";
	};
};

void opcao5()
{
	int i;
	float media = 0;
	int cont;
	for (i = 0; i <= posicao_vector; i++)
	{
		if (v[i].tipo == 'd')
		{
			media = media + v[i].valor;
			cont++;
		}
		cout << "Media de despesas:" << media / cont;
	}
};