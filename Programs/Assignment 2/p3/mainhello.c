////////////////////////////////////////////////////////////////////
//
//Accept no from user and if no<10 display hello else display demo
//
///////////////////////////////////////////////////////////////////


#include "Header8.h"  //User defined header file

//Entry point function
int main()
{
	int iValue=0;   //Local variable
	
	printf("Enter the no\n");
	scanf("%d",&iValue);            //Accepting the input
	
	Display(iValue);                //Function call
	
	
	return 0;     //Return sucess to OS
}