////////////////////////////////////////////////////
//
//Accept no from user and print no of * on screen
//
///////////////////////////////////////////////////

#include "Header5.h"   //User defined header file inclution

//Entry point function
int main()
{
	int iValue=0;                       //Local variable
	
	printf("Enter the number\n");
	scanf("%d",&iValue);               //Accepting input 
	
	print(iValue);                     //Function call
	
return 0;    //Return sucess to OS 
}


