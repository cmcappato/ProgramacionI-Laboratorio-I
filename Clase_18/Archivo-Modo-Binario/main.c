#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* pArchivo;
    int numero;


    pArchivo = fopen("archivoBinario.dat", "rb");

    //fwrite(&numero, sizeof(int), 1, pArchivo); //Le paso la direccion de memoria del valor,
    fread(&numero, sizeof(int), 1, pArchivo); //Le paso la direccion de memoria del valor,
    //el tama�o de la variable, el tama�o de lo que escribo y el archivo

    fclose(pArchivo);

    printf("El numero es: %d", numero);








    return 0;
}
