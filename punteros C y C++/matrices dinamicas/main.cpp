#include "iostream"
#include "stdio.h"
#include "string"
#include "stdlib.h"

using namespace std;

/**
al ser una matriz, ser� un puntero que tendr� otros punteros adentro, por eso se usa doble asterisco,
luego se obtiene el tama�o del usuario (cantidad de libros) y al momento de inicializar la fila estamos
indicando que es un arreglo de punteros, por eso se usa el * en la l�nea 23.
**/

int main()
{
    int cols = 2; //El n�mero de columnas es fijo (s�lo t�tulo y autor)

    string** libros; //Si inicializa la matriz (punteros de punteros)

    int tamanio ; //Se inicializa la variable

    cout << "Cuantos libros desea ingresar?";

    string entrada;

    getline(cin, entrada); //Se asigna el valor ingresado

    tamanio = atoi(entrada.c_str()); //Se transforma la entrada en n�mero

    libros = new string*[tamanio];//Se asigna el n�mero de filas seg�n el usuario
    //La instrucci�n new utilizada con los strings es necesaria para asignar el espacio en memoria para esa colecci�n de elementos.

    cout << "Por favor ingrese la siguiente informaci�n de los Libros: \n";
    string titulo ,autor;
    for(int i = 0; i < tamanio; i++)
    {
        libros[i] = new string[cols]; //Cada fila contendr� dos columnas
        //Notar que cols pudo haber sido ingresada por el usuario tambi�n

        cout << "\n******* Libro " << i + 1 << "********:\n";
        cout << "Titulo: ";
        getline(cin,titulo);
        cout << "Autor: ";
        getline(cin,autor);
        libros[i][0] = titulo;
        libros[i][1] = autor;
    }

    //Para liberar la memoria debemos recorrer fila por fila primero.
    for (int i = 0; i < tamanio; ++i)
    {
        delete [] libros[i]; //Cada fila de libros es otro array de punteros
        //Por eso son punteros a punteros
    }

    //Luego de limpiar las columnas, quitamos la fila �nica que qued�
    delete [] libros;


    system("pause");

    return 0;
}
