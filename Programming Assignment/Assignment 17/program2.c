#include<stdio.h>
#include<stdlib.h>

int Display(int *Brr,int iSize)
{

int iCnt=0,iEcount=0,iOcount=0,iDiff=0;

for(iCnt=0;iCnt<iSize;iCnt++)
{

if((*Brr)%2==0)
{
	iEcount++;
}
else 
{
iOcount++;
}
Brr++;
}

printf("Even=%d\n",iEcount);
printf("Odd=%d\n",iOcount);

iDiff=iEcount-iOcount;

return iDiff;
}
int main()
{
	int *p=NULL,iCnt=0,iRet=0,iLength=0;

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
   
   iRet=Display(p,iLength);
   
   printf("Difference =%d\n",iRet);
   
	return 0;
}