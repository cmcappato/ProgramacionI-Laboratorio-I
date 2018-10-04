#include <stdio.h>
#include <string.h>
#include "Serie.h"

/*
    int idSerie;
    int status;
    char title[30];
    int seasons;
    char gender[30];
*/
void inicializarSeriesEstado(eSerie series[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        series[i].status = 0;
    }
}

void inicializarSeriesHardCode(eSerie series[])
{
    int id[5]= {100,101,102,103,104};
    char titulo[5][30]= {"TBBT","BB","GOT","AHS","SCD"};
    int temporadas[5]= {9,7,7,6,1};
    char genero[5][30]= {"Comedia","Policial","Ciencia Ficcion",
	"Terror","Comedia"};

    int i;

    for(i=0; i<5; i++)
    {
        series[i].idSerie = id[i];
        series[i].seasons = temporadas[i];
        series[i].status = 1;
        strcpy(series[i].title, titulo[i]);
        strcpy(series[i].gender, genero[i]);
    }
}

void mostrarSerie (eSerie serieParametro)
{
    printf("%d -- %s\n", serieParametro.idSerie, serieParametro.title);
}

void mostrarListaSeries(eSerie listado[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        if (listado[i].status == 1)
        {
            mostrarSerie(listado[i]);
        }
    }
}
