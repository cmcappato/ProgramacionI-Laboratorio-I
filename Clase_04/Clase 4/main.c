#include <stdio.h>
#include <stdlib.h>
#include "UTN_INPUT.h"


int main()
{
    int edad;
    edad = pedirEntero("Edad: ", 18, 65);
    printf("Su edad es %d", edad);
    return 0;
}

