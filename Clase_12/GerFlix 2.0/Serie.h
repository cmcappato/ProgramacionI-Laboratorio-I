typedef struct
{
    int idSerie;
    int status;
    char title[30];
    int seasons;
    char gender[30];

}eSerie;

void inicializarSeriesEstado(eSerie[], int);

void inicializarSeriesHardCode(eSerie[]);

void mostrarSerie (eSerie);

void mostrarListaSeries(eSerie[], int);
