#include <iostream>

using namespace std;

int main()
{
    int list[] = {10, 8, 1, 3, 7};
    int i = 0, size = 0, min = 0, j = 0, aux = 0;

    size = (sizeof(list)/sizeof(*list));

    //Imprimir lista desordenada
    cout << "lista desordenada\n";
    for (i = 0; i < size; i++)
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
    for (i = 0; i < size; i++)
    {
        cout << list[i] << "-\n";
    }

    system("pause");
    return 0;
}
