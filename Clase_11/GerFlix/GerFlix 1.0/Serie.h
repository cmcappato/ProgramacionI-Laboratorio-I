#include <string.h>
#include <stdio.h>

typedef struct
{
    int idSerie;
    char nombre[50];
    char genero[20];
    int cantidadTemporadas;
    int estado;

}eSerie;

void inicializarSeriesEstado(eSerie[], int);
void inicializarSeriesHardCode(eSerie[]);
void mostrarSerie (eSerie);
void mostrarListaSeries(eSerie[], int);


