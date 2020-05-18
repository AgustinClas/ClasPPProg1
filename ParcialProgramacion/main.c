#include <stdio.h>
#include <stdlib.h>
#include "ParcialProgramacion.h"
#include "UTN.h"



int main()
{
    float precio;
    float precioConDescuento;
    char cadena[100];
    char caracter;
    int cantidadCaracter;

    eNotebook notebooks[6]={{1000, "Intel100", "Samsung", 15000},
                        {1001, "IntePro", "Hp", 22000},
                        {1002, "IntelCore", "Sony", 21000},
                         {1003, "Intel", "Samsung", 12000},
                        {1004, "Intel0", "Sony", 14000},
                         {1005, "Intel", "Hp", 25000}};


    printf("Ingrese el precio del producto: ");
    scanf(" %f", &precio);

    precioConDescuento = aplicarDescuento(precio);

    printf("\nEl precio con descuento es: %.2f\n\n", precioConDescuento);

    utn_getString(cadena, "Ingrese una cadena: ", "Error. ", 10);

    printf("\nIngrese un caracter: ");
    scanf("%c", &caracter);

    cantidadCaracter = contarCaracteres(cadena, caracter);
    printf("\n Cantida del caracter en la cadena: %d\n\n", cantidadCaracter);

    ordenarNotebooks(notebooks, 6);

}

