#include <stdio.h>
#include <stdlib.h>
#include "mostrarArray.h"
#include "pedirArray.h"
#include "ordenarArray.h"
#define CantNum 3

int main(){

    int arrayInt[CantNum];
    int arrayOrdenadoInt[CantNum];

    PedirArray(arrayInt,CantNum);
    MostrarArray(arrayInt,CantNum);
    OrdenarArray(arrayInt,CantNum);
    MostrarArray(arrayOrdenadoInt,CantNum);

    return 0;
}


