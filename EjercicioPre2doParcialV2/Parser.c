#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayList.h"
#include "Empleado.h"

int parser_parseEmpleados(char* fileName, ArrayList* listaEmpleados)
{
    int id[4096];
    char nombre[4096];
    char horasTrabajadas[4096];

    Empleado* auxEmpleados;

    int auxInt;

    //int id2;

    //int horasTrabajadas;

    FILE* pFile = NULL;
    pFile = fopen(fileName,"r");
        char nombre2[256];
    if(pFile != NULL && listaEmpleados != NULL){

        while(!feof(pFile)){ // == 0

            fscanf(pFile,"%[^,],%[^,],%[^,\n]\n",id,nombre,horasTrabajadas);
            //printf("\n%s - %s - %s\n",nombre,horasTrabajadas);
            auxEmpleados = empleados_newParametros(id,nombre,horasTrabajadas);
            al_add(listaEmpleados,auxEmpleados);
           /* auxEmpleados = empleados_new();
            empleados_setNombre(auxEmpleados,nombre);
            empleados_setHorasTrabajadas(auxEmpleados,horasTrabajadas2);
            al_add(listaEmpleados,auxEmpleados);
            auxInt = al_len(listaEmpleados);*/
        }
        //printf("%d\n",auxInt);

    }
    fclose(pFile);
    return 1; // OK
}

