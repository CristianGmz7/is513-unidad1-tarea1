#include<iostream>
#include<string>

using namespace std;

int enterData(int list[]) 
{
    int i = 0, size = 0;
    string entry;

    while(i < 100){
        cout << "Ingrese numero (presione Enter sin escribir nada para terminar):" << endl;
        getline(cin, entry);

        if (entry.empty()) 
        {
            break;
        }

        //convertir lo que se ingresó a numero
        try 
        {
            int number = stoi(entry);
            list[i] = number;
            i++;
            size++;
        } 
        catch (const invalid_argument& e) 
        {
            cout << "Error. Debe ingresar un numero entero:" << endl;
        }
    }

    return size;
}

void selectionOrder (int list[], int size)
{
    int i = 0, min = 0, j = 0, aux = 0;

    //Imprimir lista desordenada
    cout << "lista desordenada\n";
    for (int i = 0; i < size; i++)
    {
        cout << list[i] << "-\n";
    }

    //Algoritmo de ordenamiento por seleccion
    for (i = 0; i < size; i++)
    {
        min = i;
        for (j = i+1; j < size; j++)
        {
            //condicion para encontrar el menor elemento
            if(list[j] < list[min])
            {
                min = j;
            }
        }

        //intercambiar posicion actual con el minimo
        aux = list[i];
        list[i] = list[min];
        list[min] = aux;
    }

    //Imprimir lista ordenada
    cout << "\n\nlista ordenada\n";
    for (int i = 0; i < size; i++)
    {
        cout << list[i] << "-\n";
    }
}

int binarySearch (int list[], int size, int searchedValue)
{
    int inf = 0, sup = size - 1, middle;

    while (inf <= sup) 
    {
        middle = (inf + sup) / 2;

        if (list[middle] == searchedValue) 
        {
            return middle; // Valor encontrado
        } 
        else if (list[middle] < searchedValue) 
        {
            inf = middle + 1;
        } 
        else 
        {
            sup = middle - 1;
        }
    }

    return -1;
}

int main()
{
    int list[100];

    int size = enterData(list);

    selectionOrder(list, size);

    int searchedValue;
    cout << "Ingrese el numero a buscar: "; cin >> searchedValue;

    int position = binarySearch(list, size, searchedValue);

    if (position != -1) 
    {
        cout << "El numero " << searchedValue << " se encontro en la posicion: " << position << endl;
    } 
    else 
    {
        cout << "El numero " << searchedValue << " no se encuentra en la lista" << endl;
    }

    system("pause");
    return 0;
}
