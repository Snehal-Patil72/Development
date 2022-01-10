////////////////////////////////////////////////////////////////////
//
//Accept no from user and check even or odd
//
///////////////////////////////////////////////////////////////////


#include "Header10.h"  //User defined header file

//Entry point function
int main()
{
	int iValue=0,iRet=0;   //Local variable
	
	printf("Enter the no\n");
	scanf("%d",&iValue);            //Accepting the input
	
	iRet=Check(iValue);                //Function call
	
	if(iRet==1)                        //Selection
		printf("No is even\n");
	else
		printf("No is odd\n");
	
	
	return 0;     //Return sucess to OS
}