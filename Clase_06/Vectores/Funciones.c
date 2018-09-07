#include <stdio.h>
#include "Funciones.h"


void cargarVector(int vector[], int tam)
{
    char seguir;
    int posicion;

    do
    {
        printf ("Ingrese posicion: ");
        scanf ("%d", &posicion);

        printf("Ingrese un valor: ");
        scanf("%d", &vector[posicion - 1]);

        printf("Desea continuar con el ingreso? ");
        setbuf(stdin, NULL);
        scanf("%c", &seguir);
    }while(seguir == 's');
}


void mostrarVector (int vector[], int tam)
{
    int i;

    for(i=0; i < tam; i++)
    {
        if(vector[i]!= -1)
        {
           printf("%d\n", vector[i]);
        }
    }
 }

void inicializarVector(int vector[], int tam)
{
    int i;

    for(i=0; i < tam; i++)
    {
        vector[i] = -1;
    }
}

int sumarValores (int vector[], int tam)
{
    int acumulador = 0;
    int i;

    for(i = 0; i < tam; i++)
    {
        if(vector[i]!= -1)
        {
           acumulador = acumulador + vector[i];
        }
    }

    return acumulador;
}









