//////////////////////////////////////////////////
//
//Function name : Number
//Input : Integer
//Output : Void
//Discription : Print n number in reverse order 
//Author : Snehal Dilip Patil
//Date : 2/9/2021
//
//////////////////////////////////////////////////

/* Algorithm
   
 START
     Accept no from user in iValue
	 Print the no in reverse order
	 STOP
*/

#include "Head.h"
void Number(
            int iNo            //Input argument
		   )
 {
	int i=0;                    //Local variable
	for(i=iNo;i>=1;i--)
	printf("%d\n",i);

 }
	  