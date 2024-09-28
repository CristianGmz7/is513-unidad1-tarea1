#include <iostream>

using namespace std;

int main()
{
	int list[] = {1, 3, 7, 11, 19};

	int inf = 0, sup = 0, middle = 0, fact = 0;
	int i = 0;
	bool flag = false; 

	sup = (sizeof(list)/sizeof(*list));
	// '\0' es caracter nulo de C++, mientras no se llegue al final siga contando los elemento

	middle = (inf + sup) / 2;

	cout << "Ingrese el numero a buscar: ";
	cin >> fact;

	// Algoritmo de busqueda binaria
	while (inf <= sup)
	{
		if (list[middle] == fact)
		{
			flag = true;
			break;
		}

		if (list[middle] < fact)
		{ // el valor esta en la parte superior
			inf = middle + 1;
		}
		else
		{ // el valor esta en la parte inferior
			sup = middle - 1;
		}

		middle = (inf + sup) / 2;
	}

	// Imprimir resultados
	if (flag)
	{
		cout << "****************************************\n";
		cout << "El numero " << fact << " se encontro en la posicion: " << middle << endl;
		cout << "****************************************\n";
	}
	else
	{
		cout << "****************************************\n";
		cout << "El numero " << fact << " no se encuentra en la lista " << endl;
	}

	system("pause");
	return 0;
}
