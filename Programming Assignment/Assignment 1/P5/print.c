////////////////////////////////////////////////////////////////
//
//Function name : print
//Input :Integer
//Output : void
//Discription : Accept no from user and print no of * on screen
//Author : Snehal Dilip patil
//Date : 2/9/2021
//
/////////////////////////////////////////////////////////////////

/* Algorithm

 STRAT
     Accept no from user in iNo
	 Print no of * on screen
  STOP
*/

#include "Header5.h"

void print(
            int iNo         //Input argument
		  ) 
{
	register int i=0;        //Local variable
	
	for(i=1;i<=iNo;i++)      //Iteration
		printf("*\t");
	
}
			  