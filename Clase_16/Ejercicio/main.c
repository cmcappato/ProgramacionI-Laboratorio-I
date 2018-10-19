#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int a;
    char b;
} eDato;

eDato* cargarDatos ();

int main()
{
    eDato* d;

    d = cargarDatos();

    if (d == NULL)
    {
        printf("No hay espacio");
    }
    else
    {
        printf("%d--%c", d->a, d->b);
    }
    return 0;
}

eDato* cargarDatos ()
{

    eDato* pDato;
    pDato = (eDato*) malloc (sizeof(eDato));

    //si quiero asignar un valor predeterminado:

    if (pDato != NULL)
    {
        pDato->a = 0;
        pDato->b = ' ';
    }
    return pDato;
}
