#include <stdio.h>
#include <string.h>

void contar(char frase[], char diccionario[],int i);

int main ()
{
    char dicc[26] = "abcdefghijklmnopqrstuvwxyz", frase[100];
    int i;
    int opcion=1;
    while(opcion==1)
    {
        printf("introzca una cadena de caracteres: ");
        fflush(stdin);
        fgets(frase, 30, stdin);
        for(i = 0; i<25; i++)
            contar(frase, dicc, i);
        printf("\nDesea ingresar otra cadena? \n Ingrese (1) para SI o (0) para NO: ");

        scanf("%d",&opcion);
    }

    return 0;
}

void contar(char frase[], char dicc[], int i)
{
    int j, largo,cont;
    char letra;
    cont = 0;
    largo = strlen(frase);

    for (j = 0; j < largo-1; j++)
    {
        if (frase[j] == dicc[i])
        {
                cont+=1;
                letra = dicc[i];
        }
    }

    if (cont!= 0)
        printf("%c%d", letra, cont);
}
