typedef struct
{
    int idUser;
    char name[30];

}eUsuario;

void inicializarUsuariosEstado(eUsuario[], int);

void inicializarUsuariosHardCode(eUsuario[]);

void mostrarListaUsuarios(eUsuario[], int);
