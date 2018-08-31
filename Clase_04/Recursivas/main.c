#include <stdio.h>
#include <stdlib.h>
/*Una funcion recursiva se llama a si misma y con ella se puede simular una iteracion.
Son funciones que solo se tienen que usar si es necesario ya que consumen muchos recursos.*/

int calcularFactorial (int);

int main()
{
    int numero;
    int factorial;
    int i;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    factorial = calcularFactorial(numero);

    for(i=1; i<=numero; i++)
    {
        factorial = factorial*i;
    }
    printf("El factorial es: %d", factorial);
    return 0;
}

int calcularFactorial (int numero)
{
    int factorial;

    if(numero==0)
    {
        factorial = 1;
    }
    else
    {
        factorial = numero * calcularFactorial(numero - 1);
    }

    return factorial;
}
