/////////////////////////////////////////////////////////////////////////////
//
//Function name : Display
//Input : Integer,Integer
//Output : void
//Discription : Accept no from user and print n no of times
//Author : Snehal Dilip Patil
//Date : 3/9/2021
//
/////////////////////////////////////////////////////////////////////////////

/* Algorithm

 START
   Accept no from user and store in ivalue
   Accept no of times to print
   Print the number
 STOP
 
 */
 
 #include "Header9.h"
 
 void Display(
               int iNO,    			   //Input argument
			   int iCount              //Input argument
			 )
{

register int i;                       //Local variable

for(i=1;i<=iCount;i++)                //Iteration
{
printf("%d\t",iNO);
}

}
			 