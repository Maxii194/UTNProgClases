#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#include "pantalla.h"
#define OCUPADO 0
#define LIBRE 1
#define TIPO_LED 0
#define TIPO_LCD 1

static int generarId(void){
    static int id=-1;
    id++;
    return id;
}

int pantalla_inicializar(Pantalla* arrayPantalla, int limite){

    int retorno = -1;
    int i;
    if(limite > 0 && arrayPantalla != NULL)
    {
        retorno = 0;
        for(i=0;i<limite;i++)
        {
            arrayPantalla[i].id = -1;
            arrayPantalla[i].tipo = -1;
            strcpy(arrayPantalla[i].nombrePantalla,"");
            strcpy(arrayPantalla[i].direccionPantalla,"");
            arrayPantalla[i].isEmpty = LIBRE;

        }
    }
    return retorno;
}

int pantalla_buscarPorId(Pantalla* arrayPantalla,int limite, int id)
{
    int retorno = -1;
    int i;
    if(limite > 0 && arrayPantalla != NULL)
    {
        retorno = -2;
        for(i=0;i<limite;i++)
        {
            if(arrayPantalla[i].isEmpty == OCUPADO && arrayPantalla[i].id == id)
            {
                retorno = i;
                break;
            }
        }
    }
    return retorno;
}

int pantalla_alta(Pantalla* arrayPantalla, int limite, int index){

    int retorno = -1;
    char nombreAux[50];
    int tipoAux;
    char direccionAux[128];

    if(getStringLetras("Ingrese nombre: ",nombreAux)){

        if(!getValidInt("Ingrese tipo de pantalla:\n\t1)LED\n\t2)LCD\n","Opcion no valida",&tipoAux,1,2,2)){

            if(getStringLetras("Ingrese direccion: ",direccionAux)){

                strcpy(arrayPantalla[index].nombrePantalla,nombreAux);
                strcpy(arrayPantalla[index].direccionPantalla,direccionAux);
                arrayPantalla[index].tipo = tipoAux;
                arrayPantalla[index].isEmpty = OCUPADO;
                arrayPantalla[index].id = generarId();
                retorno = 0;
            }
        }
    }

    return retorno;
}

int pantalla_modificacion(Pantalla* arrayPantalla, int limite){

    int retorno = -1;

    return retorno;
}

int pantalla_baja(Pantalla* arrayPantalla, int limite){

    int retorno = -1;

    return retorno;
}


int pantalla_buscarLugarLibre(Pantalla* arrayPantalla,int limite)
{
    int retorno = -1;
    int i;
    if(limite > 0 && arrayPantalla != NULL)
    {
        retorno = -2;
        for(i=0;i<limite;i++)
        {
            if(arrayPantalla[i].isEmpty == LIBRE)
            {
                retorno = i;
                break;
            }
        }
    }
    return retorno;
}

/*static int proximoId()
{
    static int ultimoId = -1;
    ultimoId++;
    return ultimoId;
}*/

