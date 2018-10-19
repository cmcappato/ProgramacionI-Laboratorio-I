/*crear una estructura y una funcion que no reciba nada y
devuelva un puntero a esa estructura

crear un puntero a esa estructura, cargarlo con datos y
devolverlos
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int numero;
    char caracter;


} eDato;

eDato* cargarDatos ();

int main()
{
    eDato* dato;

    dato = cargarDatos();

    printf("%d--%c", dato->numero, dato->caracter);

    return 0;
}

eDato* cargarDatos ()
{
    eDato miDato;
    eDato* pDato;



    miDato.numero = 6;
    miDato.caracter = 'C';

    pDato = &miDato;
    //printf("%d--%c", pDato->numero, pDato->caracter);

    return pDato;
}




#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int numero;
    char caracter;


}eMiEstructura;

eMiEstructura* cargarDatos ();

int main()
{
    eMiEstructura* miEstructura;

    miEstructura = cargarDatos ();

    printf("\n El entero es %d: ", miEstructura->numero);
    printf("\n El caracter es %c: ", miEstructura->caracter);

    return 0;
}

eMiEstructura* cargarDatos ()
{
    eMiEstructura *aux;

    printf("Ingrese un numero: ");
    scanf("%d", aux->numero);
    setbuf(stdin, NULL);
    printf("Ingrese un caracter: ");
    scanf("%c", aux->caracter);
    setbuf(stdin, NULL);

    return aux;
}

-------------------------------

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int entero = 4;//0x30
    int* pEntero;//0x90

    pEntero = &entero; //para apuntar la direccion de memoria del entero a pEntero
    */
    int* pEntero;

    pEntero = (int*) malloc(sizeof(int));//La funcion malloc se encarga de buscar espacio en memoria para una variable

    if(pEntero != NULL)
    {
        *pEntero = 6;
        printf("%p--%d", pEntero, *pEntero);
        free (pEntero);//como no puedo liberar un espacio que no apunte a nada, lo puedo liberar aca para asegurarme de quepueda ser reutilizado
        printf("\n%p--%d", pEntero, *pEntero);
    }
    else
    {
        printf("No hay suficiente espacio");
    }
    //Asi como puedo ocupar espacio en memoria, tambien lo puedo liberar
    
    return 0;
}
