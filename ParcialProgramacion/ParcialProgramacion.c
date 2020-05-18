#include "ParcialProgramacion.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float aplicarDescuento(float precio)
{
    float resultado;

    resultado = (precio /100) * 95;

    return resultado;
}

int contarCaracteres (char cadena[], char caracter)
{
    int contadorCaracter=0;
    int largoCadena;

    largoCadena = strlen(cadena);

    for(int i=0; i<largoCadena; i++){
        if(cadena[i]== caracter){
            contadorCaracter++;
        }
    }

    return contadorCaracter;

}

void ordenarNotebooks(eNotebook notebooks[], int tam)
{
    eNotebook auxNotebook;

    for(int i=0; i<tam -1; i++){
        for(int j=i+1; j<tam; j++){
            if(strcmp(notebooks[i].marca, notebooks[j].marca)==1){
                auxNotebook = notebooks[i];
                notebooks[i]=notebooks[j];
                notebooks[j]=auxNotebook;

            }else if(strcmp(notebooks[i].marca, notebooks[j].marca)==0){
                if(notebooks[i].precio > notebooks[j].precio){
                    auxNotebook = notebooks[i];
                    notebooks[i]=notebooks[j];
                    notebooks[j]=auxNotebook;


                }
            }
        }
    }

    printf("Id         procesador           marca       precio\n");

    for(int i=0; i<tam;i++){

        printf("%4d  %15s %15s     %.2f\n", notebooks[i].id, notebooks[i].procesador, notebooks[i].marca, notebooks[i].precio);
        }
}
