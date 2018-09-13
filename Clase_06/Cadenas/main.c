#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre[20];
    int cantidad;

    printf("Ingrese su nombre: ");
    scanf("%[^\n]", nombre);
    /*fgets(nombre, 20, stdin);

    puts(nombre);

    nombre[strlen(nombre)-1]= '\0';*/


    cantidad= strlen(nombre);

    printf("Cantidad: %d", cantidad);

    return 0;
}
