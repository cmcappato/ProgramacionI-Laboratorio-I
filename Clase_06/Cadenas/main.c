#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre[20]="Anibal";
    char otroNombre[20]="Juan";
    int cantidad;
    int compara;
    int i=0;

    /*strcat(otroNombre, " ");
    strcat(otroNombre, nombre);
    printf("%s", otroNombre);*/

    //Para mostrar lo anterior sin el %s uso un for o un while

    while(nombre[i]!= '\0')
    {

        //if(tolower(nombre[i])=='a')
            //printf("%c", nombre[i]);


        i++;




    }

    printf("%d",i);




    return 0;
}
