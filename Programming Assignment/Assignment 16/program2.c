#include<stdio.h>
#include<stdlib.h>
void Display(int Brr[],int iSize)
{
	int iCnt=0;
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
	if((Brr[iCnt]%5)==0)
	{
       printf("%d\n",Brr[iCnt]);
	}
		
	}
	
}
int main()
{
	int *p=NULL,iCnt=0,iLength=0;
	
	printf("Enter total Number of Element\n");
    scanf("%d",&iLength);

p=(int *)malloc(iLength*sizeof(int));

if (p==NULL)
{
printf("Unable to allocate memory\n");
return -1;
}

printf("Enter %d Element\n",iLength);

for(iCnt=0;iCnt<iLength;iCnt++)
{
printf("Enter %d Element \n",iCnt+1);
scanf("%d",&p[iCnt]);

}

	Display(p,iLength);
	
	return 0;
	
}