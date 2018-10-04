#include <stdio.h>
#include <stdlib.h>
#include "Usuario.h"
#include "Serie.h"
#define TAMSERIE 20
#define TAMUSUARIO 100

int main()
{
    int opcion;

    eSerie listaDeSeries[TAMSERIE];
    eUsuario listaDeUsuarios[TAMUSUARIO];

    inicializarSeriesEstado(listaDeSeries, TAMSERIE);
    inicializarSeriesHardCode(listaDeSeries);

    inicializarUsuariosEstado(listaDeUsuarios,TAMUSUARIO);
    inicializarUsuariosHardCode(listaDeUsuarios);

    do
    {
        printf("1- Mostrar el listado de series\n");
        printf("2- Mostrar el listado de usuarios\n");
        printf("3- Mostrar el listado de Usuarios con el nombre de la serie que ve\n");
        printf("4- Mostrar por cada serie, el nombre de los usuarios que la ven\n");
        printf("10- Salir\n");
        printf("------------------------------------------------------------------------------\n");

        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1:
                mostrarListaSeries(listaDeSeries, TAMSERIE);
                break;
            case 2:
                mostrarListaUsuarios(listaDeUsuarios, TAMUSUARIO);
                break;
            case 3:
                mostrarUsuarioConSuSerie(listaDeUsuarios,TAMUSUARIO, listaDeSeries,TAMSERIE);
                break;
            case 4:
                mostrarSerieConSuUsuario(listaDeSeries,TAMSERIE, listaDeUsuarios,TAMUSUARIO);
                break;
            case 10:
                printf("Programa finalizado\n");
                break;
            default:
                printf("Opcion incorrecta\n");

        }
        system("pause");
        system("cls");
    }
    while(opcion!=10);

    /*  1. Mostrar el listado de series
        2. Mostrar el listado de usuarios
        3. Mostrar el listado de Usuarios con el nombre de la serie que ve
        4. Mostrar por cada serie, el nombre de los usuarios que la ven.
    */
    return 0;
}
