// aula4.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//



#include "pch.h"
#include <iostream>

using namespace std;

bool par(int num)
{
	if (num % 2 == 0)
		return true;
	else
		return false;
}

int k = 0;

int somar(int num)
{
	if (k < 10) {
		k++;
		if (par(num)) {
			num = num + 2;
				cout << "Num: " << num << endl;
				return num + somar(num);
		}
		else if (!par(num)) {
			num = num + 1;
				cout << "Num: " << num << endl;
				return num + somar(num);
		}
	}
	return 0;
}

int main()
{
	int x;
	cout << "Entre com o valor inteiro: ";
	cin >> x;
	cout << "Resultado da soma: "<< somar(x);
	return 0;
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
