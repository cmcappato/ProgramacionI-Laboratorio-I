#include <stdio.h>
#include <stdlib.h>
#define T 5

void cargarVector(int*, int);





int main()
{
    int miVector [T]= {2, 6, 1, 3, 4};
    int i;
    int j;
    int aux;
    int flag = 0;

    for(i = 0; i<T-1; i++)
    {
        for ( j= (i+1); j < T; i++)
        {
            if(miVector[i]>miVector[i])//criterio de ordenamiento
            {
                aux = miVector[i];
                miVector[i] = miVector[j];
                miVector[j] = aux;
            }
        }
    }
    for (i=0; i < T; i++)
    {
        if (miVector == 3)
        {

            flag = 1;
            printf("Ingrese un numero: ");
            scanf("%d", &miVector [i]);
        }
    }

    if (flag == 0)
    {
        printf("No se encontro el dato");
    }

    printf("Ingrese un numero a buscar:");
    scanf("%d", &aux);

    for (i=0; i < T; i++)
    {
        if (aux == miVector[i])
        {
            printf("Posicion %d \n", i);
            break;//para mostrar solo el primero
        }
    }
    printf("Muestro solo los pares:\n");
    for (i=0; i < T; i++)
    {
        if(miVector[i]%2==0)
        {
            printf("%d\n", miVector [i]);
        }
    }

    return 0;
}

void cargarVector(int*, int);
