////////////////////////////////////////
//
//Accept 2 number from user and perform division
//
////////////////////////////////////////

#include"Header1.h"                //user defined header file

//Entry point function
int main()
{
	int iValue1=0,iValue2=0,iRet=0;  //Local variable 
	
	printf("Enter first Number\n"); 	
	scanf("%d",&iValue1);            //Accepting the input
	
	printf("Enter second Number\n");  
	scanf("%d",&iValue2);            //Accepting the input
	
	iRet=Division(iValue1,iValue2);  //Function call
	
	printf("Division : %d",iRet);
	
	return 0;   //Return sucess to OS
	
}