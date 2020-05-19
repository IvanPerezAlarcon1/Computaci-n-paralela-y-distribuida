#include <iostream>

using namespace std;

int main()
{
    char * apuntador = NULL; //declaramos el puntero, se recomienda que sea NULL para detectar posibles errores
    char letra;
    apuntador = &letra; //le asignamos al apuntador la direc de memoria de la variable letra
    *apuntador = 'X'; //modificamos la variable a través del apuntador
    cout << letra << endl; //muestra X por pantalla
    return 0;
}
