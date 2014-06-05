#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "menu.h"
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
	system("cls");
	menu();
	cin >> opcao_escolhida;
	while (opcao_escolhida != 12)
	{
		switch (opcao_escolhida)
		{
			case 1: system("cls"); opcao1(); break;
			case 2: system("cls"); opcao2(); break;
			case 3: system("cls"); opcao3(); break;
			case 4: system("cls"); opcao4(); break;
			case 5: system("cls"); opcao5(); break;
			case 6: system("cls"); opcao6(); break;
			case 7: system("cls"); opcao7(); break;
			case 8: system("cls"); opcao8(); break;
			case 9: system("cls"); opcao9(); break;
			case 10: system("cls"); opcao10(); break;
			case 11: system("cls"); opcao11(); break;
		}
		system("cls");
		menu();
		cin >> opcao_escolhida;
	}
	cout << "\n Programa terminado!\n";
	system("pause");
}
void menu();
void opcao1() // INSERIR REGISTO NOVO
{
	cout << " Despesa (d) ou receita (r): ";
	cin >> v[posicao_vector].tipo;
	cout << " Valor: ";
	cin >> v[posicao_vector].valor;
	cout << "\n Insira a data de hoje: \n";
	cout << " Dia: ";
	cin >> v[posicao_vector].data1.dia;
	cout << " Mes: ";
	cin >> v[posicao_vector].data1.mes;
	cout << " Ano: ";
	cin >> v[posicao_vector].data1.ano;
	posicao_vector++;
}
void opcao2() // LISTAR DESPESAS
{
	int i;
	int cont_d = 0;
	for (i = 0; i <= posicao_vector; i++)
	{
		if (v[i].tipo == 'd')
		{
		
			cout << " Numero de registo: " << i << "\n Quantia: " << v[i].valor << "\n Data: " << v[i].data1.dia << " / " << v[i].data1.mes << " / " << v[i].data1.ano << "\n \n";
			cont_d++;
		}
	}
	if (cont_d == 0)
		cout << " Nao ha registo de despesas!\n \n";
	system("pause");
}
void opcao3() // LISTAR RECEITAS
{
	int i;
	int cont_r = 0;
	for (i = 0; i <= posicao_vector; i++)
	{
		if (v[i].tipo == 'r')
		{
		
			cout << " Numero de registo: " << i << "\n Quantia: " << v[i].valor << "\n Data: " << v[i].data1.dia << " / " << v[i].data1.mes << " / " << v[i].data1.ano << "\n \n";
			cont_r++;
		}
	}
	if (cont_r == 0)
		cout << " Nao ha registo de receitas!\n \n";
	system("pause");
}
void opcao4() // EDITAR REGISTO
{
	char tipo_a_procurar;
	short int dia_a_procurar;
	short int mes_a_procurar;
	short int ano_a_procurar;
	int registo_a_procurar;
	int cont_registos = 0;
	int i;
	cout << "\n Que tipo de registo pretende editar?(r ou d) ";
	cin >> tipo_a_procurar;
	cout << "\n Em que dia foi efectuado o registo? ";
	cout << "\n Ano: ";
	cin >> ano_a_procurar;
	cout << "\n Mes: ";
	cin >> mes_a_procurar;
	cout << "\n Dia: ";
	cin >> dia_a_procurar;
	for (i = 0; i <= posicao_vector; i++)
	{
		if (v[i].data1.ano == ano_a_procurar)
		{
			if (v[i].data1.mes == mes_a_procurar)
			{
				if (v[i].data1.dia == dia_a_procurar)
				{
					if (v[i].tipo == tipo_a_procurar)
					{
						cout << "\n Numero de registo: " << i << "\n Quantia: " << v[i].valor << "\n Data: " << v[i].data1.dia << " / " << v[i].data1.mes << " / " << v[i].data1.ano << "\n \n";
						cont_registos++;
					}
				}
			}
		}
	}
	if (cont_registos > 0)
	{
		cout << "\n Qual o numero do registo que pretende editar? ";
		cin >> registo_a_procurar;
		for (i = 0; i <= posicao_vector; i++)
		{
			if (i == registo_a_procurar)
			{
				cout << "\n Despesa (d) ou receita (r): ";
				cin >> v[i].tipo;
				cout << "\n Valor: ";
				cin >> v[i].valor;
				cout << "\n Insira a data: ";
				cout << " Dia: ";
				cin >> v[i].data1.dia;
				cout << " Mes: ";
				cin >> v[i].data1.mes;
				cout << " Ano: ";
				cin >> v[i].data1.ano;
			}
		}
	}
	else
	{
		cout << "\n Nao foram encontrados registos do tipo procurado na data inserida!\n \n";
		system("pause");
	}
}
void opcao5() // APRESENTAR MEDIA DE DESPESAS
{
	int i;
	float media = 0;
	int cont=0;
	for (i = 0; i <= posicao_vector; i++)
	{
		if (v[i].tipo == 'd')
		{
			media = media + v[i].valor;
			cont++;
		}
	}
	if ((media / cont) > 0)
	{
		cout << "\n Media de despesas: " << media / cont << "\n";
		system("pause");
	}
	else
	{
		cout << "\n Nao foram introduzidas despesas!\n";
		system("pause");
	}
}
void opcao6()  // APRESENTAR MEDIA DE RECEITAS
{
	int i;
	float media = 0;
	int cont = 0;
	for (i = 0; i <= posicao_vector; i++)
	{
		if (v[i].tipo == 'r')
		{
			media = media + v[i].valor;
			cont++;
		}
	}
	if ((media / cont) > 0)
	{
		cout << "\n Media de receitas: " << media / cont << "\n";
		system("pause");
	}
	else
	{
		cout << "\n Nao foram introduzidas receitas!\n";
		system("pause");
	}
	
}
void opcao7()  // APRESENTAR SALDO ACTUAL
{
		int i;
		float total_d = 0;
		float total_r = 0;
		float saldo = 0;
		for (i = 0; i <= posicao_vector; i++)
		{
			if (v[i].tipo == 'd')
			{
				total_d = total_d + v[i].valor;
			}
		}
		for (i = 0; i <= posicao_vector; i++)
		{
			if (v[i].tipo == 'r')
			{
				total_r = total_r + v[i].valor;
			}
		}
		cout << "Saldo: " << total_r - total_d << "\n";
		system("pause");
}
void opcao8()  // DESPESAS POR DATA
{
	int ano_procurar;
	int mes_procurar;
	int dia_procurar;
	int cont_registos = 0;
	cout << "\n Em que data pretende procurar? ";
	cout << "\n Ano: ";
	cin >> ano_procurar;
	cout << "\n Mes: ";
	cin >> mes_procurar;
	cout << "\n Dia: ";
	cin >> dia_procurar;
	int i;
	for (i = 0; i <= posicao_vector; i++)
	{
		if (v[i].data1.ano == ano_procurar)
		{
			if (v[i].data1.mes == mes_procurar)
			{
				if (v[i].data1.dia == dia_procurar)
				{
					if (v[i].tipo == 'd')
					{
						cout << "\n Numero de registo: " << i << "\n Quantia: " << v[i].valor<<"\n \n";
						cont_registos++;
					}
				}
			}
		}
	}
	if (cont_registos == 0)
	{
		cout << "\n\n Nao foram encontradas despesas na data procurada!\n \n ";
	}
	system("pause");
}
void opcao9()  // RECEITAS POR DATA
{
	int ano_procurar;
	int mes_procurar;
	int dia_procurar;
	int cont_registos = 0;
	cout << "\n Em que data pretende procurar? ";
	cout << "\n Ano: ";
	cin >> ano_procurar;
	cout << "\n Mes: ";
	cin >> mes_procurar;
	cout << "\n Dia: ";
	cin >> dia_procurar;
	int i;
	for (i = 0; i <= posicao_vector; i++)
	{
		if (v[i].data1.ano == ano_procurar)
		{
			if (v[i].data1.mes == mes_procurar)
			{
				if (v[i].data1.dia == dia_procurar)
				{
					if (v[i].tipo == 'r')
					{
						cout << "\n Numero de registo:" << i << "\n Quantia:" << v[i].valor << "\n \n";
						cont_registos++;
					}
				}
			}
		}
	}
	if (cont_registos == 0)
	{
		cout << "\n\n Nao foram encontradas receitas na data procurada!\n \n ";
	}
	system("pause");
}
void opcao10() // DESPESAS ACIMA DE:
{
	int valor_a_procurar;
	int i;
	int cont_registos = 0;
	cout << "\n Pretende procurar despesas acima de: ";
	cin >> valor_a_procurar;
	for (i = 0; i <= posicao_vector; i++)
	{
		if (v[i].tipo == 'd')
		{
			if (v[i].valor > valor_a_procurar)
			{
				cout << " Numero de registo:" << i << "\n Quantia:" << v[i].valor << "\n Data:" << v[i].data1.dia << " / " << v[i].data1.mes << " / " << v[i].data1.ano << "\n \n";
				cont_registos++;
			}
		}
	}
	if (cont_registos == 0)
	{
		cout << "\n\n Nao foram encontradas despesas acima de " << valor_a_procurar << "! \n \n";
	}
	system("pause");
}
void opcao11()  // RECEITAS ACIMA DE:
{
	int valor_a_procurar;	
	int i;
	int cont_registos = 0;
	cout << "\nPretende procurar receitas acima de: ";
	cin >> valor_a_procurar;
	for (i = 0; i <= posicao_vector; i++)
	{
		if (v[i].tipo == 'r')
		{
			if (v[i].valor > valor_a_procurar)
			{
				cout << " Numero de registo:" << i << "\n Quantia:" << v[i].valor << "\n Data:" << v[i].data1.dia << " / " << v[i].data1.mes << " / " << v[i].data1.ano << "\n \n";
				cont_registos++;
			}
		}
	}
	if (cont_registos == 0)
	{
		cout << "\n\n Nao foram encontradas receitas acima de " << valor_a_procurar << "! \n \n";
	}
	system("pause");
}