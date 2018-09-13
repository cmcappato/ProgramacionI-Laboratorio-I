#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "Funciones.h"


float calcularPromedio(int notaUno, int notaDos, int notaTres)
{
    float promedio;

    promedio = (float)(notaUno + notaDos + notaTres)/3;
    return promedio;
}

int cargarAlumnos(char nombre[][50], int notaUno[],int notaDos[],int notaTres[],float promedio[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("Ingrese su nombre completo: ");
        fflush(stdin);
        gets(nombre[i]);
        printf("Ingrese la nota 1: ");
        scanf("%d", &notaUno[i]);
        printf("Ingrese la nota 2: ");
        scanf("%d", &notaDos[i]);
        printf("Ingrese la nota 3: ");
        scanf("%d", &notaTres[i]);

        promedio[i] = calcularPromedio(notaUno[i], notaDos[i], notaTres[i]);
    }
    return 0;
}

int mostrarAlumnos(char nombre[][50], int notaUno[],int notaDos[],int notaTres[],float promedio[], int tam)
{
    int i;

    printf("%20s %6s %6s %6s %8s\n", "Nombre", "Nota 1", "Nota 2", "Nota 3", "Promedio" );

    for(i=0; i<tam; i++)
    {
        printf("%20s %6d %6d %6d %.2f\n", nombre[i], notaUno[i], notaDos[i]
               , notaTres[i], promedio[i]);
    }
    return 0;
}


