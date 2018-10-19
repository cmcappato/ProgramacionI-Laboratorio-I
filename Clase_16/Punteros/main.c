#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int numero;
    char caracter;


}eMiEstructura;

eMiEstructura* cargarDatos ();

int main()
{
    eMiEstructura* miEstructura;

    miEstructura = cargarDatos ();

    printf("\n El entero es %d: ", miEstructura->numero);
    printf("\n El caracter es %c: ", miEstructura->caracter);

    return 0;
}

eMiEstructura* cargarDatos ()
{
    eMiEstructura *aux;

    printf("Ingrese un numero: ");
    scanf("%d", aux->numero);
    setbuf(stdin, NULL);
    printf("Ingrese un caracter: ");
    scanf("%c", aux->caracter);
    setbuf(stdin, NULL);

    return aux;
}
