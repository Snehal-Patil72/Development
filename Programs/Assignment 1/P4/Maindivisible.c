////////////////////////////////////////////////////
//
//Accept no and check it is divisible by 5 or not
//
////////////////////////////////////////////////////

#include "Header4.h"                   //User defined file inclution

//Entry point function
int main()
{
	int iValue=0;                                //Local variable
	BOOL bRet=0;                                 //Local variable
	
	printf("Enter the Number\n");
    scanf("%d",&iValue);                          //Accepting input argument

    bRet=Divisible(iValue);	                      //Function call 
	
	if(bRet==0)                                     //Condition checking
		printf("Number is not divisible by 5\n");
	else
		printf("Number is divisible by 5\n");

	
	return 0;               //Return sucess ton OS
}