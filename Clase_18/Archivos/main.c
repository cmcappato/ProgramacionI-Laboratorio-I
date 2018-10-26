#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*FILE* pArchivo;

    char palabra [20] = "Hola";

    pArchivo = fopen("texto", "r");//(PATH espacio fisico, MODO en el que abro el archivo)

    fgets(palabra, 20, pArchivo);
    fclose(pArchivo);
    puts(palabra);
    fprintf(pArchivo, "%d Como estan todos?", 9);//Cumple la misma funcion que el printf pero cambia el buffer de salida y los parametros que le paso

    fclose(pArchivo);//Cierra el flujo de datos entre el programa y el archivo para que lo pueda usar otro programa*/


    /*FILE* archivo;

    archivo = fopen("texto.txt","w");
    fprintf(archivo, "Hola \n");
    fprintf(archivo,"Chau");
    fclose(archivo);*/

    /*
    Crear un array con nombres que se pueda guardar en un archivo y luego mostrarla


    */
    FILE* archivo;

    char p1[20];
    char p2[20];

    archivo = fopen("texto.txt", "r");
    fgets(p1, 20, archivo);
    puts(p1);
    fgets(p2, 20, archivo);
    puts(p2);

    return 0;
}
