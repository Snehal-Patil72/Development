/////////////////////////////////////////////////////////////////////////////
//
//Function name : Display
//Input : Integer
//Output : void
//Discription : Accept no from user and if no<10 display hello else demo
//Author : Snehal Dilip Patil
//Date : 3/9/2021
//
/////////////////////////////////////////////////////////////////////////////

/* Algorithm

 START
   Accept no from user and store in ivalue
   Check no is less than 10 or not
   If less than 10 print hello
   Else print demo on screen
 STOP
 
 */
 
 #include "Header8.h"
 
 void Display(
               int iNO          //Input argument
			 )
{

if(iNO<10)                     //Selection
       printf("hello");
else
       printf("demo");

}
			 