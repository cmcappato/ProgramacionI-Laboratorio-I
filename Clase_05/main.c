#include <stdio.h>
#include <stdlib.h>

/** \brief Incrementa en 10 el valor recibido
 *
 * \param int el valor sobre el que voy a incrementar
 * \return int [1] si el valor es mayor que 15 y [0] si no lo es
 *
 */
int miFuncion (int*);

int main()
{
    int miEntero = 3;
    int estado; //el estado que me va a devolver la funcion

    estado = miFuncion(&miEntero);

    printf("El nuevo valor es %d\n", miEntero);

    if (estado == 1)
    {
        printf("El valor es mayor a 15");
    }
    else
    {
        printf("El valor es menor o igual a 15");
    }

    return 0;
}

int miFuncion (int* pValor)
{
    int queDevuelve = 0;// esto lo puedo hacer para ahorrarme el else
    int aux;
    aux = (*pValor);

    aux += 10;

    if (aux > 15)
    {
        queDevuelve = 1;
    }

    (*pValor) = aux;

    return queDevuelve;
}


