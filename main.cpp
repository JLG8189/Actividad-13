#include <iostream>
#include "arregloDinamico.h"
using namespace std;

int main()
{
    ArregloDinamico<string> arreglo;

    arreglo.insertar_inicio("Dos");
    arreglo.insertar_inicio("Uno");
    arreglo.insertar_final("Tres");
    arreglo.insertar_final("Cuatro");

    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }
    
    cout << endl;

    arreglo.insertar("Cinco", 2);

    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }
    
    cout << endl;

    arreglo.eliminar_inicio();
    arreglo.eliminar_final();
    arreglo.eliminar(1);

    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }
    
    cout << endl;

    return 0;
}