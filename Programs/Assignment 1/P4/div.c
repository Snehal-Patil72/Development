/////////////////////////////////////////////////////////////////
//
//Function name : Divisible
//Input : Integer
//Output : Integer
//Discription : Accept no and check it is divisible by 5 or not
//Aucthor : Snehal Dilip Patil
//Date : 2/9/2021
//
//////////////////////////////////////////////////////////////////

/*  Algorithm
  
  START
      Accept no from user in iNo
      Check no is divisible by 5 or not
      Store the result in iRet
      Return result to caller
    STOP	  
 */
 
 #include "Header4.h"
 
BOOL Divisible(
               int iNO        //Input argument
			  )
 {
	 
	if(iNO%5==0)             //Condition checking
        return 1;            //Return result to caller
    else 
        return 0;            //Return result to caller

 }	
       			 
			  