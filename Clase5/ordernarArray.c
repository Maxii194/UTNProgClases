#include <stdio.h>
#include <stdlib.h>
#include "ordenarArray.h"

int OrdenarArray(int* arrayInt, int CantNum){

    int arrayOrdenadoInt[CantNum];
    int i,x;
    int minimo=0;
    int flag;

    for(x=0;x<CantNum;x++){

        flag = 0;
        for(i=0;i<CantNum;i++){

            if(arrayInt[i] < minimo || flag == 0){

                minimo = arrayInt[i];
                flag = 1;
            }
        }
        arrayOrdenadoInt[x] = minimo;
    }

    return 0;
}
