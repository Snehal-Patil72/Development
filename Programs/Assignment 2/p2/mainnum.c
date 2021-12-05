////////////////////////////////////////////////////////
//
//Accept no from user and print no of * on screen
//
////////////////////////////////////////////////////////


#include "Header7.h"  //User defined header file

//Entry point function
int main()
{
	int iValue=0;   //Local variable
	
	printf("Enter the no\n");
	scanf("%d",&iValue);            //Accepting the input
	
	Display(iValue);                //Function calloc
	
	
	return 0;     //Return sucess to OS
}