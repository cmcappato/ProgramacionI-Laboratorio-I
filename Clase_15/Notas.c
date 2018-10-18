	char letra;
    char* pLetra = NULL;
    //Ingreso el char a traves del puntero
    //Muestro el char a traves del puntero
    pLetra = &letra;

    printf("Ingrese una letra: ");
    setbuf(stdin, NULL);
    *pLetra = getche();

    scanf("%c", pLetra);

    printf("\n%c", *pLetra);



    -----------------------------------
    void cargar(int*, int);
void mostrar(int*, int);

int main()
{
    int array [5] = {5, 9, 6, 7, 1};
    int* pEntero;

    pEntero = array;
    /*
    pEntero = &array;
    pEntero = array[5];
    */

    cargar(array, 5);
    mostrar(array, 5);


    return 0;
}

void cargar(int* pArray, int tam)
{
    int i = 0;

    for(i=0; i<tam; i++)
    {
        printf("Ingrese un numero: ");
        scanf( "%d", pArray + i);
    }
}

void mostrar(int* pArray, int tam)

{
    int i;
    for(i=0; i<tam; i++)
    {

        {
            printf("%d\n", *(pArray + i));
        }
    }

}
