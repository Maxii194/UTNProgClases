#include <stdio.h>
#include <stdlib.h>
#include "pedirArray.h"
#include "get.h"


int PedirArray(int *arrayInt, int CantNum){

    int i,numero;
    for(i=0;i<CantNum;i++){

        getInt(&numero,"\nIngrese un numero: ","\nRango Invalido",0,100);
        arrayInt[i] = numero;
    }

    return 0;
}

