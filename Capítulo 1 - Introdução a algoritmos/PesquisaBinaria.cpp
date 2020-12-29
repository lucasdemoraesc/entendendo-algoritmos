#include <iostream>
using namespace std;

#define TAM 10

int pesquisa_binaria(int *, int);

int main()
{
	int lista[TAM] = {500, 501, 502, 503, 504, 505, 506, 507, 508, 509};
	int item = 0;

	cout << "Digite o valor que deseja buscar: ";
	cin >> item;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore();
		cout << "Valor invalido, digite novamente: ";
		cin >> item;
	}

	int posicao = pesquisa_binaria(lista, item);

	if (posicao == -1)
		cout << "Elemento " << item << " nao encontrado!" << endl;
	else
		cout << "Posicao do elemento no vetor: " << posicao << endl;

	return 0;
}

int pesquisa_binaria(int *lista, int item)
{
	int baixo = 0;
	int alto = TAM - 1;

	while (baixo <= alto)
	{
		int meio = (baixo + alto) / 2;
		int chute = lista[meio];

		if (chute == item)
			return meio;
		if (chute > item)
			alto = meio - 1;
		else
			baixo = meio + 1;
	}
	return -1;
}