/////////////////////////////////////////////////
//
//Print n number in reverse order
//
/////////////////////////////////////////////////

#include "Head.h"      //User defined header file inclution


//Entry point function
int main()
{
	int iValue=0;               //Local variable
	
    printf("Enter the No\n");
	scanf("%d",&iValue);        //Accepting the input
	
	Number(iValue);             //Function calloc
	
	return 0;  //Return sucess to OS
	
}	
	
