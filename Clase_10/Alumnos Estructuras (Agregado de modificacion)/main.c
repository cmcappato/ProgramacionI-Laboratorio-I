#include <stdio.h>
#include <stdlib.h>
#include "Alumnos.h"

#define A 2
#define VACIO 0
#define OCUPADO 1
#define ELIMINADO -1

int main()
{

    eAlumno listaAlumnos[A];
    inicializarAlumnos (listaAlumnos, A, VACIO);
    inicializarAlumnosConDatos (listaAlumnos, A);
    int opcion;

    do
    {
        printf("1: Cargar alumno \n");
        printf("2: Mostrar alumno \n");
        printf("3: Borrar alumno \n");
        printf("4: Modificar alumno \n");
        printf("10: Salir \n");

        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            if (cargarAlumnoEnListado(listaAlumnos, A))
            {
                printf("\nDato cargado con exito\n");
            }
            else
            {
                printf("\nNo existe espacio disponible\n");
            }
            break;

        case 2:
            mostrarListado(listaAlumnos, A);
            break;

        case 3:
            if(borrarAlumno(listaAlumnos, A))
            {
                printf("Dato encontrado.\n");
                printf("El alumno se borro.\n");
            }
            else
            {
                printf("Dato no encontrado.\n");
            }
            break;
        case 4:
            if(modifcarAlumno(listaAlumnos, A))
            {
                printf("El alumno se modifico.\n");
            }
            break;
        case 10:
            printf("Programa finalizado\n");
            break;

        default:
            printf("Opcion incorrecta");
        }

        system("pause");
        system("cls");

    }
    while(opcion!=10);

    return 0;
}
