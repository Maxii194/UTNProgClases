#include <stdio_ext.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "utn.h"


static int getInt(int* pResultado);
static int esNumero(char* pCadena)
{

    int i=0;
    int retorno = 0;
    char aux;

    aux = pCadena[i];

    while(aux != 0){

        if(aux < 48 || aux > 57){

            retorno = -1;
            break;
        }

        i++;
        aux = pCadena[i];
    }

    return retorno;
}



int funcion(void)
{
    static int i=9;

    i++;
    return i;
}



int utn_getEntero(int* pEdad,int reintentos,char* msg,
                          char*msgErr,int min, int max)
{


    int retorno = -1;
    int auxiliarEdad;

    for(;reintentos > 0;reintentos--)
    {
        printf(msg);

        //if(scanf("%d",&auxiliarEdad) == 1)
        if(getInt(&auxiliarEdad) == 0)
        {
            if(auxiliarEdad >= min && auxiliarEdad < max)
            {
                *pEdad = auxiliarEdad;
                retorno = 0;
                break;
            }
            else
            {
                printf(msgErr);
                //printf("HOLA");
            }
        }
        else
        {
            printf(msgErr);
            __fpurge(stdin);
            printf("HOLA");
        }
    }
    return retorno;
}



static int getInt(int* pResultado)
{
    /*int aux;
    int ret=-1;
    if(scanf("%d",&aux) == 1)
    {
        *pResultado = aux;
        ret=0; // ok
    }
    return ret;*/

    int aux;
    char cadena[64];
    scanf("%s",cadena);

    //validacion
    if(esNumero(cadena)==1){

        aux = atoi(cadena);
        *pResultado = aux;

        return 0;
    }

    return -1;

}


