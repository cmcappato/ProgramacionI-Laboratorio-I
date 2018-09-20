#include <stdio.h>
#include "Funciones.h"

eAlumno cargarAlumno()
{
    eAlumno miAlumno;

    printf("Ingrese legajo: ");
    scanf("%d", &miAlumno.legajo);

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(miAlumno.nombre);

    printf("Ingrese promedio: ");
    scanf("%f", &miAlumno.promedio);

    return miAlumno;
}

void mostrarAlumno (eAlumno alumnoParametro)
{
    printf("%d--%s--%.2f\n", alumnoParametro.legajo, alumnoParametro.nombre,
           alumnoParametro.promedio);
}

void cargarListado(eAlumno listado[], int tam)
{
    int i;

    for (i=0; i<tam ; i++)
    {
        listado[i] = cargarAlumno();
    }
}

void mostrarListado(eAlumno listado[], int tam)
{
    int i;

    for (i=0; i<tam ; i++ )
    {
        if (listado[i].estado==OCUPADO)
        {
            mostrarAlumno(listado[i]);
        }



    }
}

void inicializarAlimnos (eAlumno lista[], int tam, int estado)
{
    int i;
    for(i = 0; i<tam; i++)
    {
        lista[i].estado = estado;
    }




}










