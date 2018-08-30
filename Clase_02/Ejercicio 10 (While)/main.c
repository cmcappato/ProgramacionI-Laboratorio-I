#include <stdio.h>
#include <stdlib.h>
/*
Al presionar el botón pedir números hasta que el usuario quiera, mostrar:
1-Suma de los negativos.
2-Suma de los positivos.
3-Cantidad de positivos.
4-Cantidad de negativos.
5-Cantidad de ceros.
6-Cantidad de números pares.
7-Promedio de positivos.
8-Promedios de negativos.
9-Diferencia entre positivos y negativos, (positvos-negativos).
*/
int main()
{
    int numero;
    int acumuladorPositivos = 0;
    int acumuladorNegativos = 0;
    int contadorPositivos = 0;
    int contadorNegativos = 0;
    int contadorCeros = 0;
    int contadorPares = 0;
    int maximo;
    int minimo;
    int flag = 0;
    float promedioPositivos;
    float promedioNegativos;
    char respuesta;

    do
    {
        printf("Ingrese un numero: ");
        scanf("%d", &numero);

        if(numero>0)
        {
            acumuladorPositivos = acumuladorPositivos + numero;
            contadorPositivos++;
            //acumuladorPositivos += numero;
        }
        else
        {
            if(numero<0)
            {
                acumuladorNegativos += numero;
                contadorNegativos++;
            }
            else
            {
                contadorCeros++;
            }
        }


        if(numero%2==0)
        {
            contadorPares++;
        }
        if (flag==0 || numero>maximo)
        {
            maximo = numero;
            flag = 1;
        }
        if (flag==0 || numero>minimo)
        {
            minimo = numero;
            flag = 1;
        }



        printf("Desea ingresar otro numero? s/n: ");
        setbuf(stdin,NULL);
        scanf("%d", &numero);

    }
    while(respuesta=='s');

    promedioPositivos = (float)acumuladorPositivos / contadorPositivos;
    promedioNegativos = (float)acumuladorNegativos / contadorNegativos;
    //como acumulador y contador son enteros, la cuenta va a dar un numero entero, no flotante, por eso se castea


    printf("El acumulado de positivos es: %d \n",acumuladorPositivos);
    printf("El acumulado de negativos es: %d \n",acumuladorNegativos);
    printf("La cantidad de positivos es: %d \n",contadorPositivos);
    printf("La cantidad de negativos es: %d \n",contadorNegativos);
    printf("La cantidad de ceros es: %d \n",contadorCeros);
    printf("La cantidad de pares es: %d \n",contadorPares);
    printf("El promedio de positivos es: %.2f \n",promedioPositivos);// el %.2f es para mostrar solo decimal
    printf("El promedio de negativos es: %.2f \n",promedioNegativos);
    printf("El numero maximo es: %d \n",maximo);
    printf("El numero minimo es: %d \n",minimo);



    return 0;
}
