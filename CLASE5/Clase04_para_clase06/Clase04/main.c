#include <stdlib.h>
#include "utn.h"
#include <stdio.h>


int main()
{


    int edad;
    //if(getEdad(&edad) == 0)
    if(utn_getEntero(&edad,3,"edad?:","error",0,199) == 0)
    {

        printf("La edad es: %d",edad);
    }



    return 0;
}





