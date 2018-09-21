#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "utn.h"
#include "pantalla.h"
#define Pantallas 100
#define Contrataciones 1000
#define TIPO_LED 0
#define TIPO_LCD 1
#define OCUPADO 0
#define LIBRE 1

//1º inicializar Lista
//2º Buscar Lugar Libre
//3º Gernerar Id

int main()
{

    int menu;
    int index;

    Pantalla arrayPantallas[Pantallas];
    pantalla_inicializar(arrayPantallas,Pantallas);

    do{

        getValidInt("\n\n1.Alta Cliente\n2.Modificar\n","\nNo valida\n",&menu,1,2,1);
        switch(menu)
        {

            case 1:

                index = pantalla_buscarLugarLibre(arrayPantallas,Pantallas);
                if(index >= 0){

                    pantalla_alta(arrayPantallas,Pantallas,index);
                    printf("%d",arrayPantallas[index].id);

                    break;
                }
                else{

                    printf("\nId no existente");
                }


        }
    }while(menu != 2);

    //index=pantalla_buscarLugarLibre()
    //if(index>=0)

    return 0;
}
