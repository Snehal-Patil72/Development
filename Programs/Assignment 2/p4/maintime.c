////////////////////////////////////////////////////////////////////
//
//Accept no from user and print that no n times
//
///////////////////////////////////////////////////////////////////


#include "Header9.h"  //User defined header file

//Entry point function
int main()
{
	int iValue=0,iTime=0;   //Local variable
	
	printf("Enter the no\n");
	scanf("%d",&iValue);                     //Accepting the input
	
	printf("Enter the no of time\n");
	scanf("%d",&iTime);                      //Accepting the input
	
	Display(iValue,iTime);                          //Function call
	
	
	return 0;     //Return sucess to OS
}