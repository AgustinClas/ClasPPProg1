#ifndef PARCIALPROGRAMACION_H_INCLUDED
#define PARCIALPROGRAMACION_H_INCLUDED

typedef struct
{
    int id;
    char procesador[20];
    char marca[20];
    float precio;

}eNotebook;

#endif // PARCIALPROGRAMACION_H_INCLUDED

float aplicarDescuento(float precio);
int contarCaracteres (char cadena[], char caracter);
void ordenarNotebooks(eNotebook notebooks[], int tam);

