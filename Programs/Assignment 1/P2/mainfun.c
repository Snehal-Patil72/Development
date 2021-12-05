///////////////////////////////////////////////////
//
//Accept no from user and print string
//
///////////////////////////////////////////////////


#include "marvel.h"                    //User defined header file inclusion

//Entry point function
int main()
{
	int iValue=0;                       //Local variable
	
	printf("Enter the no of times\n");
	scanf("%d",&iValue);                //Accepting the input
	
	Display(iValue);                    //Function call
	
	return 0;       //return sucess to OS
}