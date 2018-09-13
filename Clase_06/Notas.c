Dar de alta: cargar elementos (A, B, C, D);
Modificar: (A, E, C, D);
Dar de baja: (A, E,  , D); la posicion del vector sigue existiendo pero queda libre.
Cuando se da de alta uno nuevo va a tener el lugar libre.

-----------------------CADENAS-----------------------

en una cadena de caracteres, de por ejemplo 15 caracteres,
si el usuario ingresa 4 caracteres para que no muestre la basura
que viene luego uso "\0" luego del printf para que el programa sepa
hasta donde leer la variable.

strlen() 
strcpy(): recibe dos cadenas y pega la segunda a la primera. 
Asigna el valor de origen al valor de destino. Si en la variable ya
habia un dato lo sobreescribe.
strcmp(): recibe dos constantes a char y devuelve un entero. es para 
cómparar dos variables 
stricmp(): lo mismo que la anterior, pero ignora las mayusculas
strupr() y strlwr(): pasan todo a mayusculas o minusculas respectivamente
strcat(): recibe un puntero a char y la otra puede ser una constante 
con puntero a char
fgets(): se declara el numero maximo de caracteres que se puede ingresar
en un vector y se asegura de que se corte si se ingresan mas para que
el programa no se rompa. Como esta preparada para leer archivos tiene
varias lineas tiene un \n al final.




/* 
	char nombre[20]="Anibal";
    char otroNombre[20]="Juan";
    int cantidad;
    int compara;
    int i=0;

	printf("Ingrese su nombre: ");
    setbuf(stdin, NULL);
    //scanf("%s", nombre); si pongo un nombre compuesto solo toma el primero
    gets(nombre);
    //printf("%s\n", nombre);

    compara = stricmp(nombre, otroNombre);

    if (compara==0)
    {
        printf("Son iguales");
    }
    else
    {
        if (compara < 0 )
        {
            printf("%s esta despues que %s", otroNombre, nombre);
        }
        else
        {
            printf("%s esta despues que %s", nombre, otroNombre);
        }
    }
    /*cantidad = strlen(nombre);

    strlwr(otroNombre);


    for(i = 0; i<strlen(nombre); i++)
    {
        if(tolower(nombre[i])=='a')
            printf("%c", nombre[i]);
        
    }

    printf("La cantidad de caracteres es: %d\n", cantidad);*/



EJERCICIO:

variables:
	nombre (ingreso maximo de 20 caracteres)
	apellido (ingreso maximo de 20 caracteres)
	VALIDARLAS.  De alguna manera hay que bloquearlas, queda

	apellido y nombre concatena con el siguiente formato:
 	Gomez, Juan Luis

 	crear una funcion de fgets que no tome el \n

 	nombre[strlen(nombre)-1]= '\0';

 	 /*strcat(otroNombre, " ");
    strcat(otroNombre, nombre);
    printf("%s", otroNombre);*/

    //Para mostrar lo anterior sin el %s uso un for o un while

    while(nombre[i]!= '\0')
    {

        //if(tolower(nombre[i])=='a')
            printf("%c", nombre[i]);//sin esto el printf de abajo cuenta cuantos caracteres hay


        i++;




    }

    printf("%d",i);





























