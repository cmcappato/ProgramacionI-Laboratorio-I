#include <stdio.h>
#include <stdlib.h>
/* Caso 1: La funcion no recibe ni devuelve nada

//defino la funcion
void sumar (void);
//void = vacio, es un tipo de dato generico, la funcion no devuelve nada
int main()
{
   sumar();
    return 0;
}
//Segunda instancia, desarrollar la funcion, el proceso

void sumar (void)
{
    int numeroUno;
    int numeroDos;
    int suma;

    printf("Ingrese el primer numero: ");
    scanf("%d", &numeroUno);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &numeroDos);

    suma = numeroUno + numeroDos;

    printf("El resultado de la suma es: %d", suma);
*/
// Caso dos: la función recibe datos pero no los devuelve

void sumar(int n1, int n2);

int main()//scope es todo lo que esta dentro de las llaves en una funcion
{
    int numeroUno;
    int numeroDos;//variables locales de main

    printf("Ingrese el primer numero: ");
    scanf("%d", &numeroUno);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &numeroDos);

    sumar(numeroUno + numeroDos);
    return 0;
}

void sumar (int n1, int n2)
{
    int suma;

    suma = n1 + n2;

    printf("El resultado de la suma es: %d", suma);


}
