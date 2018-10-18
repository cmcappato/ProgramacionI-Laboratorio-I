

#include <stdio.h>
#include <stdlib.h>
#include "Alumnos.h"
#include "Curso.h"
#define A 100
#define VACIO 0
#define OCUPADO 1
#define ELIMINADO -1

int main()
{

    eAlumno listaAlumnos[A];
    int opcion, i, j;

    eCurso misCursos [3];

    inicializarCursos(misCursos);
    mostrarTodosLosCursos(misCursos, 3);

    inicializarAlumnos (listaAlumnos, A, VACIO);
    inicializarAlumnosConDatos (listaAlumnos, A);
    do
    {
        printf("1: Cargar alumno \n");
        printf("2: Mostrar alumno \n");
        printf("3: Borrar alumno \n");
        printf("4: Modificar alumno \n");
        printf("5: Mostrar alumnos con curso \n");
        printf("10: Salir \n");

        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            if (cargarAlumnoEnListado(listaAlumnos, A))
            {
                printf("Dato cargado con exito\n");
            }
            else
            {
                printf("No existe espacio disponible\n");
            }
            break;

        case 2:
            mostrarListado(listaAlumnos, A);
            break;

        case 3:
            if(borrarAlumno(listaAlumnos, A))
            {
                printf("Dato encontrado \n");
                printf("El alumno se borro \n");
            }
            else
            {
                printf("Dato no encontrado \n");
            }
            break;
        case 4:
            if(modificarAlumno(listaAlumnos, A))
            {
                printf("El alumno se modifico \n");
            }
            break;
        case 5:
            for (i=0; i<A; i++)
            {
                if (listaAlumnos[i].estado == OCUPADO)
                {
                    printf("%d--%s--%f\n", listaAlumnos[i].legajo, listaAlumnos[i].nombre, listaAlumnos[i].promedio);

                    for (j=0; j<3; j++)
                    {
                        if (listaAlumnos[i].id == misCursos[j].id)
                        {
                            printf("%s\n", misCursos[j].nombre);
                            break;

                        }
                    }
                }

            }
            break;
        case 10:
            printf("Programa finalizado \n");
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
