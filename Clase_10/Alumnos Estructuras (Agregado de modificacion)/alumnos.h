
typedef struct
{
	int legajo;
	char nombre[50];
	float promedio;
	char direccion[50];
	int estado;
	int id;
	//eFecha fechaNacimiento;

}eAlumno;

eAlumno cargarAlumno();

void mostrarAlumno (eAlumno alumnoParametro);

/** \brief da de alta un alumno en el listado
 *
 * \param eAlumno[] el listado
 * \param tam int el tamaño del listado
 * \return int 0 = SI NO ENCONTRO ESPACIO // 1 = SI ENCONTRO ESPACIO
 *
 */
int cargarAlumnoEnListado(eAlumno[], int tam);

void mostrarListado(eAlumno[], int tam);

void inicializarAlumnos (eAlumno[], int tam, int);

int buscarEspacio (eAlumno[], int);

int borrarAlumno (eAlumno[], int);

int modifcarAlumno (eAlumno [], int);

void inicializarAlumnosConDatos (eAlumno [], int);

