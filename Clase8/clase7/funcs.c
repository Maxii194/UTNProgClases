#include <stdio.h>
#include <stdlib.h>
#include "funcs.h"


int getInt(char* mensaje,char* mensajeError,int reIntentos,int minimo,int maximo,int* resultado)
{
    int retorno = -1;
    char buffer[4096];
    long auxiliarLong;
    do
    {
        printf("%s",mensaje);
        scanf("%4095s",buffer);
        if(esEntero(buffer) == 1)
        {
            auxiliarLong = atol(buffer);
            if(auxiliarLong >= minimo && auxiliarLong <= maximo)
            {
                *resultado = (int)auxiliarLong;
                retorno = 0;
                break;
            }
        }
        printf("%s",mensajeError);
        reIntentos--;
    }while(reIntentos >= 0);
    return retorno;
}


int esEntero(char *str)
{
    int i;
    for(i=0;str[i] != '\0';i++)
    {
        if(str[i] > '9' || str[i] < '0')
            return 0;
    }
    return 1;

}

int OrdenarArray(int* arreglo,int cantidad, int orden){

    int cantCambios, i, auxiliar;

    do{

        cantCambios = 0;
        for(i=0;i<cantidad-1;i++){

            if((arreglo[i] > arreglo[i+1] && orden == 1) || (arreglo[i] < arreglo[i+1] && orden == 0)){

                auxiliar = arreglo[i];
                arreglo[i] = arreglo[i+1];
                arreglo[i+1] = auxiliar;
                cantCambios = 1;
            }
        }
    }while(cantCambios == 1);

   return 0;
}

int MoverArray(int* arreglo, int cantidad){

    int i,auxiliar;

    for(i=0;i<cantidad-1;i++){

        auxiliar = arreglo[i];
        arreglo[i] = arreglo[i+1];
        arreglo[i+1] = auxiliar;
    }

    return 0;
}

int MostrarArray(int* arreglo, int cantidad){

    int i;

    for(i=0;i<cantidad;i++){

        printf("%d",arreglo[i]);
    }
    printf("\n");

    return 0;
}
