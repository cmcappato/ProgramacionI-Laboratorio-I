 typedef struct

{
    int legajo;
    char nombre[50];
    float promedio;

} eAlumno;

void mostrarAlumno (eAlumno);

eAlumno cargarAlumno();

void cargarListado(eAlumno[], int);

void mostrarListado(eAlumno[], int);

