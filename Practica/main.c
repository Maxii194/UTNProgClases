#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "destinatarios.h"

/****************************************************
    Menu:
        1. Cargar datos desde data.csv
        2. Listar Clientes
        3. Ordenar por nombre y apellido
        4. Ordenar por mail
        5. Agregar un Cliente
        6. Elimina un Cliente
        7. Modificar Cliente (Nombre, Apellido y Mail)
        8. Listar Clientes
        9. Guardar datos en data.csv (modo texto)
       10. Guardar datos en data.bin (modo binario)
*****************************************************/
void imprimir_lista(ArrayList* pArray);
ArrayList* generarListaBlanca(ArrayList* pArrayDestinatarios, ArrayList* pArrayListaNegra);
int esDestinatarioMail(EDestinatario* destinatarioA, EDestinatario* destinatarioB){

    char mailA[256];
    char mailB[256];
    destinatarios_getMail(destinatarioA,mailA);
    destinatarios_getMail(destinatarioB,mailB);
    if(!strcmp(mailA,mailB)){
        return 1;
    }
    else{
        return 0;
    }

}


int main()
{

    ArrayList* pArrayDestinatarios = al_newArrayList();
    ArrayList* pArrayListaNegra = al_newArrayList();
    ArrayList* pArrayListaBlanca;


    parserDestinatarios("destinatarios.csv",pArrayDestinatarios);
    parserDestinatarios("black_list.csv",pArrayListaNegra);

    imprimir_lista(pArrayLista);
    generarListaBlanca(pArrayDestinatarios,pArrayListaNegra);

    return 0;
}

void imprimir_lista(ArrayList* pArray){

    int i;

    char nombre[256];
    char mail[256];

    EDestinatario* auxDestinatario=NULL;

    for(i=0;i<al_len(pArray);i++){

        //pide elemento/destinatario al array
        auxDestinatario = al_get(pArray, i);
        destinatarios_getMail(auxDestinatario,nombre);
        destinatarios_getMail(auxDestinatario,mail);
        printf("%s,%s\n",nombre,mail);
    }
}

ArrayList* generarListaBlanca(ArrayList* pArrayDestinatarios, ArrayList* pArrayListaNegra){

    ArrayList* pArrayListaBlanca = al_newArrayList();
    EDestinatario* auxDestinatarioBlack;
    auxDestinatarioBlack = al_get(pArrayListaNegra,0);

    int i,rta;

    for(i=0;i<al_len(pArrayDestinatarios);i++){

        rta = al_contains_entidad(pArrayDestinatarios,auxDestinatarioBlack,esDestinatarioMail);
        if(!rta)
            al_add(pArrayListaBlanca, al_get(pArrayDestinatarios,i));
    }

    return pArrayListaBlanca;
}
