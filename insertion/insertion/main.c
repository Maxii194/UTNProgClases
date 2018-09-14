#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{

    char nombre[70];
    int edad;
}Persona;

void insertion(int data[],int len)
{

    int i,j;
    int temp;

    for(i=1;i<len;i++)
    {

        temp = data[i];
        j=i-1;

    while(j>=0 && temp<data[j]) // temp<data[j] o temp>data[j]
    {

        data[j+1] = data[j];
        j--;
    }

    data[j+1]=temp; // inserción
    }

}

void altaPersona(Persona* p){

    char nombre[70]="";
    int edad;

    scanf("%s",nombre);
    strcpy(p->nombre,nombre);
    scanf("%d",edad);
    p->edad = edad;
}

void imprimirPersona(Persona* p){

    printf("%s\n",p->nombre);
    printf("%d\n",p->edad);
}

int main()
{

    /*int data[5]={6,3,7,1,9};
    int i;

    insertion(data,5);

    for(i=0;i<5;i++){

        printf("%d\n",data[i]);
    }*/

    Persona s_Persona;


    /*strcpy(s_Persona.nombre,"Juan");
    s_Persona.edad = 24;*/

    imprimirPersona(&s_Persona);
    altaPersona(&s_Persona);




    return 0;
}


