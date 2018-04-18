#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcs.h"
#define CantidadAlumnos 5
#define LongitudApellido 20

float SacarPromedio(int nota1 ,int nota2);
float MostrarPromedio(int* nota1, int* nota2, char apellido[][LongitudApellido], float* promedio);
float ordenarAlumno(char apellido[][20], float promedio[], int tamanio, int orden);
float MostrarPromedio(float promedio[]){

    int i;

    for(i=0;i<CantidadAlumnos;i++){

        printf(promedio[i];
    }

    return 0;
}

int main()
{
    //datos harcodeados, 1º dato: apellido, array[5]
    //se declaran char de apellidos, int de nota1, int de nota2 y float de promedio
    //pido el nombre, la nota1 y 2 , y saco el  promedio
    //usar get int para los array de int(datos entre 0 y 10)
    //funcines: float SacarPromedio
    //para ordenar pasar todos los array y el tamaño, mas el orden(asc o desc)

    char apellido[CantidadAlumnos][LongitudApellido]={"Lopez","Alvarez","Zapata","Perez","Albornos"};
    int nota1[CantidadAlumnos]={10,4,2,9,8};
    int nota2[CantidadAlumnos]={1,8,2,8,10};
    float promedio[CantidadAlumnos];

    MostrarPromedio(nota1,nota2,apellido,promedio);
    ordenarAlumno(apellido, promedio,CantidadAlumnos,1);
    MostrarPromedio(nota1,nota2,apellido,promedio);

    return 0;
}

float SacarPromedio(int nota1 ,int nota2){

    float promedio;
    promedio = ((float)nota1+nota2)/2;
    return promedio;
}

float MostrarPromedio(int* nota1, int* nota2, char apellido[][LongitudApellido], float* promedio){

    int i;

    for(i=0;i<CantidadAlumnos;i++){

        promedio[i] = SacarPromedio(nota1[i],nota2[i]);
        printf("\nNota 1: %d", nota1[i]);
        printf("\tNota 2: %d", nota2[i]);
        printf("\tPromedio: %.2f", promedio[i]);
        printf("\tAlumno: %s", apellido[i]);
    }
    printf("\n");

    return 0;
}

float ordenarAlumno(char apellido[][LongitudApellido], float promedio[], int tamanio, int orden){

    int cantCambios, i, auxiliar;

    do{

        cantCambios = 0;
        for(i=0;i<tamanio-1;i++){

            if((promedio[i] > promedio[i+1] && orden == 1) || (promedio[i] < promedio[i+1] && orden == 0)){

                auxiliar = promedio[i];
                promedio[i] = promedio[i+1];
                promedio[i+1] = auxiliar;
                cantCambios = 1;
            }
        }
    }while(cantCambios == 1);

   return 0;
}
