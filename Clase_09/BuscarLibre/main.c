#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "Funciones.h"
#define A 5



int main()
{
    int array[A];
    int i;
    char seguir;
    int indice;

    inicializarVector(array, A, -1);


    do
    {
        indice = buscarLibre(array, A, -1);
        if (indice != -1)
        {
            printf("Ingrese un numero: ");
            scanf("%d", &array[indice]);
        }

        else
        {
            printf("No hay lugar");
            break;
        }

        printf("Desea ingresar otro?");
        seguir=getche();

    }while(seguir=='s');





    return 0;
}
