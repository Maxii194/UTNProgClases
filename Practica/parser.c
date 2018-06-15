#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "destinatarios.h"
#include "parser.h"


int parserDestinatarios(char* path ,ArrayList* pArraylist)
{
    char nombre[256];
    char mail[256];
    EDestinatario* auxDestinatario;

    char mail2[256];
    int auxInt;

    FILE* pFile = NULL;
    pFile = fopen(path,"r");
    if(pFile != NULL){

        while(!feof(pFile)){

            fscanf(pFile,"%[^,],%[^,\n]\n",nombre,mail);
            //printf("\%s - %s\n",nombre,mail);
            auxDestinatario = destinatarios_new();
            destinatarios_setNombre(auxDestinatario,nombre);
            destinatarios_setMail(auxDestinatario,mail);
            destinatarios_getMail(auxDestinatario,mail2);
            al_add(pArraylist,auxDestinatario);
            auxInt = al_len(pArraylist);
        }
        //printf("%d\n",auxInt);
        fclose(pFile);
    }
}
