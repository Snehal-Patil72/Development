/////////////////////////////////////////////////////////////////////////////
//
//Function name : Display
//Input : Integer
//Output : Integer
//Discription : Accept no from user and chcek even or odd
//Author : Snehal Dilip Patil
//Date : 3/9/2021
//
/////////////////////////////////////////////////////////////////////////////

/* Algorithm

 START
   Accept no from user and store in ivalue
   Check no is even or odd
   If no is even return 1
   Else return 0
 STOP
 
 */
 
 #include "Header10.h"
 
 int Check(
               int iNO          //Input argument
			 )
{

if(iNO%2==0)                     //Selection
       return True;
else
       return False;             //Return to caller
}
			 