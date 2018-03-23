#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 5
#define cantidadCaracteres 10

int main(){

/*
EJERCICIO 1

    int numero = 0;
    float promedio;
    int acumulador = 0;
    int mayor = 0;
    int menor = 0;
    int iterador;
    int flag = 0;

    for(iterador=1;iterador<=CANTIDAD;iterador++){

        do{

            printf("Ingrese un numero (Mayor a 0): \n");
            scanf("%d",&numero);
        }while(numero < 0);

        if(mayor < numero || flag == 0){

            mayor = numero;
        }
        if(menor > numero || flag == 0){

            menor = numero;
        }

        flag = 1;
        acumulador = acumulador + numero;
    }

    promedio = (float)acumulador/CANTIDAD;

    printf("\nEl promedio  es: %.2f\n", promedio);
    printf("El numero Mayor es: %d\n", mayor);
    printf("El numero Menor es: %d\n",menor);*/

    //EJERCICIO 2


    int i;
    char letra;



    int acumA=0;
    int acumE=0;
    int acumI=0;
    int acumO=0;
    int acumU=0;

    fflush(stdin);
    scanf("%s", &letra);

    for(i=0;i<=cantidadCaracteres;i++){

       switch(letra){

        case 'a':
            acumA++;
            break;
        case 'e':
            acumE++;
            break;
        case 'i':
            acumI++;
            break;
        case 'o':
            acumO++;
            break;
        case 'u':
            acumU++;
            break;
        }
    }

    printf("A: %d E: %d I: %d O: %d U: %d ",acumA,acumE,acumI,acumO,acumU);


    return 0;
}
