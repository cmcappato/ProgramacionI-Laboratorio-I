#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Funciones.h"
#define T 3

int main()
{
    char nombre [T][50];
    int notaUno [T];
    int notaDos [T];
    int notaTres [T];
    float promedio [T];

    cargarAlumnos(nombre,notaUno,notaDos,notaTres, promedio, T);
    mostrarAlumnos(nombre,notaUno,notaDos,notaTres, promedio, T);

    return 0;
}
