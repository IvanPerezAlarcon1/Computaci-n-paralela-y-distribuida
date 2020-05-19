#include "iostream"
#include "stdio.h"
#include "string"
#include "stdlib.h"

using namespace std;

int main()
{
    string* titulos = NULL; //Se inicializa el puntero (inicia en null)
    string* autores = NULL; //Se inicializa el puntero (inicia en null)

    int tamanio ; //Se inicializa la variable

    cout << "Cuantos libros desea ingresar?";

    string entrada;

    getline(cin, entrada); //Se asigna el valor ingresado

    tamanio = atoi(entrada.c_str()); //Se transforma la entrada en n�mero

    //Declaramos un arreglo del tama�o ingresado para los titulos
    titulos = new string[tamanio];

    //Declaramos un arreglo del tama�o ingresado para los autores
    autores = new string[tamanio];

    cout << "Por favor ingrese la siguiente informaci�n de los Libros: \n";
    for(int i = 0; i < tamanio; i++)
    {
        cout << "\n******* Libro " << i + 1 << "********:\n";
        cout << "Titulo: ";
        //cin >> titulos[i]; //No funciona con espacios
        getline(cin, titulos[i]);
        cout << "Autor: ";
        //cin >> autores[i]; //No funciona con espacios
        getline(cin, autores[i]);
    }
    cout<<endl;
    for (int i=0;i<tamanio;i++)
    {
        cout<< "Autor libro "<<i<<":"<<autores[i]<<" Titulo libro "<<i<<": "<<titulos[i]<<endl;
    }

    //Liberamos la memoria de ambos punteros
    delete [] titulos;
    delete [] autores;
    titulos = NULL;
    autores = NULL;

    system("pause");

    return 0;
}
