#include <iostream>
#include <vector>

using namespace std;

template <typename T>
int busca_menor(const std::vector<T> &arr)
{
	// Armazenar menor valor
	T menor = arr[0];
	// Armazenar indice do menor valor
	int menor_indice = 0;

	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] < menor)
		{
			menor = arr[i];
			menor_indice = i;
		}
	}

	return menor_indice;
}

template <typename T>
std::vector<T> selection_sort(std::vector<T> arr)
{
	std::vector<T> novoArray;

	while (!arr.empty())
	{
		// Encontra o menor elemento e o adiciona ao vetor ordenado
		int menor_indice = busca_menor(arr);
		novoArray.push_back(arr[menor_indice]);

		// Remove o menor elemento do array não ordenado
		arr.erase(arr.begin() + menor_indice);
	}

	return novoArray;
}

int main(void)
{
	std::vector<int> array = {509, 504, 506, 507, 508, 501, 502, 503, 500, 505};
	std::vector<int> array_ordenado = selection_sort(array);

	cout << "Selection Sort: ";
	for (int i : array_ordenado)
	{
		cout << i << " ";
	}
	cout << endl;

	return 0;
}