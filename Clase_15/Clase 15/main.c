#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct
{
    int entero;
    char caracter;
}eDato;

int main()
{

    eDato miDato [2] = {{1, 'B'},{1, 'C'}};
    eDato* pDato;

    pDato = miDato;

    int i;

    for (i=0; i<2; i++)
    {
        printf("%d--%c \n", (*(pDato + i)).entero, (*(pDato + i)).caracter);
        printf("%d--%c \n", (pDato + i)->entero, (pDato + i)->caracter);
    }


    /*
    eDato miDato = {1, 'B'};
    eDato* pDato;

    pDato = &miDato;

    printf("%d--%c", (*pDato).entero, (*pDato).caracter);
    printf("%d--%c", pDato->entero, pDato->caracter);
    */

    return 0;
}
