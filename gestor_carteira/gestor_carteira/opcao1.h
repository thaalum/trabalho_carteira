#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
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
}