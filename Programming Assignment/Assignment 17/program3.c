#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool Display(int Brr[],int iSize)
{
	int iCnt=0;
	bool bCount=false;
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if((Brr[iCnt]) == 11)
		{
			bCount=true;
		}
		//Brr++;
	}
	printf("%d\n",bCount);
	
		return bCount;
}
int main()
{
	int *p=NULL,iCnt=0,iLength=0;
	bool bRet=false;

   printf("Enter total number of elemnent\n");
   scanf("%d",&iLength);
   
   p=(int *)malloc(iLength*sizeof(int));
   
   if(p==NULL)
   {
	   printf("Unable to allocate memory\n");
	   return -1;
   }
   
   printf("Enter %d Element\n",iLength);
   
   for(iCnt=0;iCnt<iLength;iCnt++)
   {
	   printf("Enter %d element\n",iCnt+1);
	   scanf("%d",&p[iCnt]);
   }
   
   bRet=Display(p,iLength);
  if(bRet==true)
  {	  
   printf("11 is Present\n");
  }
  else
  {
	     printf("11 is absent\n");
  }
	return 0;
}