#include "alumno.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Alumno* alumno_new()
{
    return malloc(sizeof(Alumno));
}

void alumno_delete(Alumno* this)
{
    free(this);
}

int  alumno_setEdad(Alumno* this, int edad)
{
    int retorno = -1;
    if(this != NULL && edad >= 0)
    {

        this->edad = edad;
        retorno = 0;
    }
    return retorno;
}

int alumno_getEdad(Alumno* this, int* edad)
{
    int retorno = -1;
    if(this != NULL && edad != NULL)
    {

        *edad = this->edad;
        retorno = 0;
    }
    return retorno;

}

char  alumno_setNombre(Alumno* this, char* nombre)
{
    int retorno = -1;
    if(this != NULL && nombre != NULL)
    {

        strcpy(this->nombre,nombre);
        retorno = 0;
    }
    return retorno;
}

char alumno_getNombre(Alumno* this, char* nombre)
{
    int retorno = -1;
    if(this != NULL && nombre != NULL)
    {

        *nombre = this->nombre;
         retorno = 0;
    }
    return retorno;
}

char  alumno_setApellido(Alumno* this, char* apellido)
{
    int retorno = -1;
    if(this != NULL && apellido != NULL)
    {

        strcpy(this->apellido,apellido);
        retorno = 0;
    }
    return retorno;
}

char alumno_getApellido(Alumno* this, char* apellido)
{
    int retorno = -1;
    if(this != NULL && apellido != NULL)
    {

        *apellido = this->apellido;
         retorno = 0;
    }
    return retorno;
}



