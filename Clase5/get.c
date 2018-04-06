#include <stdio.h>
#include <stdlib.h>

int getInt(int* input,char message[],char eMessage[], int lowLimit, int hiLimit)
{
    //.........
    //.........
    //.........
    //.........

	do{

		printf(message);
		fflush(stdin);
		scanf("%d",input);
		if(*input < lowLimit || *input > hiLimit){

			printf(eMessage);
		}
	}while(*input < lowLimit || *input > hiLimit);



    //*input = 44;
    return 0;
}
