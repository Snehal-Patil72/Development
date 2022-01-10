#include<stdio.h>
#include<stdlib.h>
int Display(int *Brr,int iSize,int iValue)
{
	int iCnt=0,iCount=0;
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if((*Brr)==iValue)
		{
			iCount++;
		}
	
	Brr++;
	}
	return iCount;
}

int main()
{
	int *p=NULL,iCnt=0,iLength=0,iNo=0;
int iRet=0;

   printf("Enter total number of elemnent\n");
   scanf("%d",&iLength);
   
   printf("Enter value of NO\n");
   scanf("%d",&iNo);
   
   
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
   
   iRet=Display(p,iLength,iNo);
   
   printf("count of No=%d\n",iRet);

	return 0;
}