#include <stdio.h>
#include <stdlib.h>
#include "mostrarArray.h"

int MostrarArray(int *arrayInt, int CantNum){

    int i;
    for(i=0;i<CantNum;i++){

        printf("\n%d",arrayInt[i]);
    }

    return 0;
}
