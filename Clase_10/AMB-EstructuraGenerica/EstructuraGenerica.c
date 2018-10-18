#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "EstructuraGenerica.h"
#define TAMANIO 10
#define OCUPADO 0
#define LIBRE 1



int eGen_init( eGenerica listado[],int limite)
{
    int indice = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        indice = 0;
        for(i=0; i<limite; i++)
        {
            listado[i].estado= LIBRE;
            listado[i].idGenerica= 0;
        }
    }
    return indice;
}

int eGen_buscarLugarLibre(eGenerica listado[],int limite)
{
    int indice = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        indice = -2;
        for(i=0; i<limite; i++)
        {
            if(listado[i].estado == LIBRE)
            {
                indice = i;
                break;
            }
        }
    }
    return indice;
}

int eGen_siguienteId(eGenerica listado[],int limite)
{
    int indice = 0;
    int i;
    if(limite > 0 && listado != NULL)
    {
        for(i=0; i<limite; i++)
        {
            if(listado[i].estado == OCUPADO)
            {
                if(listado[i].idGenerica>indice)
                {
                    indice=listado[i].idGenerica;
                }

            }
        }
    }

    return indice + 1;
}


int eGen_buscarPorId(eGenerica listado[] ,int limite, int id)
{
    int indice = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        indice = -2;
        for(i=0;i<limite;i++)
        {
            if(listado[i].estado == OCUPADO && listado[i].idGenerica == id)
            {
                indice = i;
                break;
            }
        }
    }
    return indice;
}



int eGen_mostrarUno(eGenerica parametro)
{
    printf("\n %s - %d - %d",parametro.nombre,parametro.idGenerica,parametro.estado);

}

int eGen_mostrarListado(eGenerica listado[],int limite)
{
    int indice = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        indice = 0;
        for(i=0; i<limite; i++)
        {
            if(listado[i].estado==OCUPADO)
            {

                eGen_mostrarUno(listado[i]);
            }
        }
    }
    return indice;
}


int eGen_mostrarListadoConBorrados(eGenerica listado[],int limite)
{
    int indice = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        indice = 0;
        for(i=0; i<limite; i++)
        {
            if(listado[i].estado==LIBRE)
            {
                printf("\n[LIBRE]");
            }
            eGen_mostrarUno(listado[i]);
        }
    }
    return indice;
}




int eGen_alta(eGenerica  listado[],int limite)
{
    int indice = -1;
    char nombre[50];
    int id;
    int indice;

    if(limite > 0 && listado != NULL)
    {
        indice = -2;
        indice = eGen_buscarLugarLibre(listado,limite);
        if(indice >= 0)
        {
            indice = -3;
            id = eGen_siguienteId(listado,limite);

            //if(!getValidString("Nombre?","Error","Overflow", nombre,50,2))
            //{
                indice = 0;
                strcpy(listado[indice].nombre,"juan ");
                listado[indice].idGenerica = id;
                listado[indice].estado = OCUPADO;
            //}
        }
    }
    return indice;
}
