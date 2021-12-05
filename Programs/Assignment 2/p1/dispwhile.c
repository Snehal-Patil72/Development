//////////////////////////////////////////////////////////////////
//
//Function name : Display
//Input : Integer
//Output : void
//Discription : Accept no from user and print no of * on screen
//Author : Snehal Dilip Patil
//Date : 3/9/2021
//
/////////////////////////////////////////////////////////////////

/* Algorithm

 START
   Accept no from user and store in ivalue
   Iterate the loop
   Print no of *
 STOP
 
 */
 
 #include "Header7.h"
 
 void Display(
               int iNO          //Input argument
			 )
{

 int i=1;		               //Local variable
 
while(i<=iNO)                  //Iteration
{
	printf("*\n");
	i++;
}

}
			 