#include "destinatarios.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

EDestinatario* destinatarios_new()
{
    EDestinatario* this;
    this=malloc(sizeof(EDestinatario));
    return this;
}

void destinatarios_delete(EDestinatario* this)
{
    free(this);
}

int destinatarios_setNombre(EDestinatario* this,char* nombre)
{
    int retorno=-1;
    if(this!=NULL && nombre!=NULL)
    {
        strcpy(this->nombre,nombre);
        retorno=0;
    }
    return retorno;
}

int destinatarios_getNombre(EDestinatario* this,char* nombre)
{
    int retorno=-1;
    if(this!=NULL && nombre!=NULL)
    {
        strcpy(nombre,this->nombre);
        retorno=0;
    }
    return retorno;
}

int destinatarios_setMail(EDestinatario* this,char* mail)
{
    int retorno=-1;
    if(this!=NULL && mail!=NULL)
    {
        strcpy(this->mail,mail);
        retorno=0;
    }
    return retorno;
}

int destinatarios_getMail(EDestinatario* this,char* mail)
{
    int retorno=-1;
    if(this!=NULL && mail!=NULL)
    {
        strcpy(mail,this->mail);
        retorno=0;
    }
    return retorno;
}

