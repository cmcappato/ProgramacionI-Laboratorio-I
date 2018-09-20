  typedef struct

{
    int legajo;
    char nombre[50];
    float promedio;
    int estado;

} eAlumno;

void mostrarAlumno (eAlumno);

eAlumno cargarAlumno();

void cargarListado(eAlumno[], int);

void mostrarListado(eAlumno[], int);

void inicializarAlimnos (eAlumno[], int, int);
