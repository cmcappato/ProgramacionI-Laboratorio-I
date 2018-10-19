#include <stdio.h>
#include <stdlib.h>
#define T 5

int main()
{
    /*int entero = 4;//0x30
    int* pEntero;//0x90

    pEntero = &entero; //para apuntar la direccion de memoria del entero a pEntero
    */

    int* vector;
    int* pAux;
    int i;

    vector = (int*) calloc(sizeof(int), T);//calloc inicializa en cero si no cargo nada en el vector

    if(vector != NULL)
    {
        for (i=0; i<T; i++)
        {
            *(vector + i) = i + 1;
        }
        for (i=0; i<T; i++)
        {
            printf("%d\n",*(vector + i));
        }
    }
    else
    {
        printf("No hay suficiente espacio");
    }
    //Asi como puedo ocupar espacio en memoria, tambien lo puedo liberar

    pAux = realloc (vector, sizeof(int) * (T+5));

    if (pAux != NULL)
    {

        /*recibe dos parametros, uno es un puntero a void, otro es tamaño. Devuelve la misma direccion de memoria
            reasigna los espacios en memoria*/
        printf("\nAca muestro 10\n");

        for(i=T; i<T+5; i++)
        {
            *(vector + i)= i + 1;
        }
        for(i=T; i<T+5; i++)
        {
            printf("%d \n", *(vector + i));
        }

        vector = realloc(vector, sizeof(int)* 3);

        printf("\nAca muestro 3\n");

        for(i=0; i<3; i++)
        {
            *(vector + i)= i + 1;
        }
        for(i=0; i<3; i++)
        {
            printf("%d \n", *(vector + i));
        }
    }


    return 0;
}
