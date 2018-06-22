#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Empleado.h"

static int isValidNombre(char* nombre);


Empleado* empleados_new()
{

    return malloc(sizeof(Empleado));
}

Empleado* empleados_newParametros(char* idStr, char* nombreStr, char* horasTrabajadasStr)
{
    Empleado* this;
    this = empleados_new();
    int id;
    char nombre[128];
    int horasTrabajadas;

    //Si ya valide

    id=atoi(idStr);
    strcpy(nombre,nombreStr);
    horasTrabajadas = atoi(horasTrabajadasStr);

    empleados_setId(this,id);
    empleados_setNombre(this,nombre);
    empleados_setHorasTrabajadas(this,horasTrabajadas);

    return this;
}

void empleados_delete(Empleado* this)
{
    free(this);
}

int empleados_setNombre(Empleado* this, char* nombre)
{
    int retorno = -1;
    if(this != NULL && nombre != NULL && isValidNombre(nombre))
    {
        retorno = 0;
        strcpy(this->nombre,nombre);
    }
    return retorno;
}

int empleados_getNombre(Empleado* this, char* nombre)
{
    int retorno = -1;
    if(this != NULL && nombre != NULL)
    {
        retorno = 0;
        strcpy(nombre,this->nombre);
    }
    return retorno;
}

int empleados_setId(Empleado* this, int id)
{
    int retorno = -1;
    static int maximoId = -1;
    if(this != NULL)
    {
        retorno = 0;
        if(id >= 0)
        {

            if(id > maximoId)
                maximoId = id;
            this->id = id;
        }
        else
        {
            maximoId++;
            this->id = maximoId;
        }

    }

    return retorno;
}

int empleados_getId(Empleado* this, int* id)
{
    int retorno = -1;
    if(this != NULL && id != NULL)
    {
        retorno = 0;
        *id = this->id;
    }
    return retorno;
}

int empleados_setHorasTrabajadas(Empleado* this, int horasTrabajadas)
{
    int retorno = -1;
    if(this != NULL)
    {
        retorno = 0;
        this->horasTrabajadas = horasTrabajadas;
    }
    return retorno;
}

int empleados_getHorasTrabajadas(Empleado* this, int* horasTrabajadas)
{
    int retorno = -1;
    if(this != NULL && horasTrabajadas != NULL)
    {
        retorno = 0;
        *horasTrabajadas = this->horasTrabajadas;
    }
    return retorno;
}

int empleados_setSueldo(Empleado* this, int sueldo)
{
    int retorno = -1;
    if(this != NULL)
    {
        retorno = 0;
        this->sueldo = sueldo;
    }
    return retorno;
}

int empleados_getSueldo(Empleado* this, int* sueldo)
{
    int retorno = -1;
    if(this != NULL && sueldo != NULL)
    {
        retorno = 0;
        *sueldo = this->sueldo;
    }
    return retorno;
}

void em_calcularSueldo(void* p)
{
}


static int isValidNombre(char* nombre)
{
    return 1;
}
