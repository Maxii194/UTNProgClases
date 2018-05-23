#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cliente.h"
#include "utn.h"


Cliente* cliente_new()
{
    return (Cliente*) malloc(sizeof(Cliente));
}

void cliente_delete(Cliente* this)
{
    free(this);
}


int cliente_setEdad(Cliente* this,int edad)
{
    int retorno = -1;
    if(this != NULL /*&& !getValidInt("ID: ","\Edad invalida\n",&edad,0,150,2)*/)
    {
        this->edad = edad;
        retorno = 0;

    }
    return retorno;
}

int cliente_getEdad(Cliente* this,int* edad)
{
    int retorno = -1;
    if(this != NULL && edad != NULL)
    {
        *edad = this->edad;
        retorno = 0;
    }
    return retorno;
}

static int cliente_setId(Cliente* this)
{
    int retorno = -1;
    static int ultimoId = -1;
    if(this != NULL)
    {
        ultimoId++;
        this->idCliente = ultimoId;
        retorno = 0;
    }
    return retorno;
}

int cliente_setNombre(Cliente* this,char* nombre)
{
    int retorno = -1;
    if(this != NULL && nombre != NULL)
    {

        strcpy(this->nombre,nombre);
        retorno = 0;
    }
    return retorno;
}

int cliente_getNombre(Cliente* this,char* nombre)
{
    int retorno = -1;
    if(this != NULL && nombre != NULL)
    {
        *nombre = this->nombre;
        retorno = 0;
    }
    return retorno;
}
int cliente_setApellido(Cliente* this,char* apellido)
{
    int retorno = -1;
    if(this != NULL && apellido != NULL)
    {

        strcpy(this->apellido,apellido);
        retorno = 0;
    }
    return retorno;
}

int cliente_getApellido(Cliente* this,char* apellido)
{
    int retorno = -1;
    if(this != NULL && apellido != NULL)
    {
        *apellido = this->apellido;
        retorno = 0;
    }
    return retorno;
}
int cliente_setCuit(Cliente* this,char* cuit)
{
    int retorno = -1;
    if(this != NULL && cuit != NULL)
    {

        strcpy(this->cuit,cuit);
        retorno = 0;
    }
    return retorno;
}

int cliente_getCuit(Cliente* this,char* cuit)
{
    int retorno = -1;
    if(this != NULL && cuit != NULL)
    {
        *cuit = this->cuit;
        retorno = 0;
    }
    return retorno;
}



Cliente* cliente_new_2(char nombre[50],char apellido[50],char cuit[14], int edad){

    Cliente* auxCliente = cliente_new();
    cliente_setEdad(auxCliente,edad);
    cliente_setNombre(auxCliente,nombre);
    cliente_setApellido(auxCliente,apellido);
    cliente_setCuit(auxCliente,cuit);

    return auxCliente;
}


int altaCliente(int* cantidad, Cliente* listado[]){

    //pedir datos cliente
    listado[*cantidad]=cliente_new_2(22,"asd","zxc",206589);
    *cantidad=*cantidad+1;

}

int listarClientes(int cantidad,Cliente* listado[]){

    int i;

    for(i=0;i<cantidad;i++){

        cliente_getEdad((*(listado+i)), &edad);
        printf("\n %d ", edad);
        cliente_getNombre((*(listado+i))->nombre);
        printf("\t %d ", nombre);
    }
    return 0;
}

int cliente_mostrar(){

}

