#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"
#define T 100


int main()
{
    int miVector[T];
    int suma;
    int opcion;

    inicializarVector(miVector, T);
    do
    {
        printf("1. Cargar\n2. Mostrar\n3. Sumar\n4. Salir\n");
        printf("----------------------------------\n");
        printf("Elija una opcion: ");
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                cargarVector(miVector, T);
                break;
            case 2:
                mostrarVector(miVector, T);
                break;
            case 3:
                suma = sumarValores(miVector, T);
                printf("La suma es: %d\n", suma);
                break;
        }

    }while(opcion!=4);


    return 0;

}
