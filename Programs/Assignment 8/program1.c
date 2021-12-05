#include<stdio.h>

void DisplayNum(int,int);


int main()
{

int iValu1=0,iValue2=0;

printf("Enter starting value\n");
scanf("%d",&iValu1);


printf("Enter End value\n");
scanf("%d",&iValue2);

DisplayNum(iValu1,iValue2);

	return 0;
}

void DisplayNum(int iStart,int iEnd)
{

int iCnt=0;


if(iStart>iEnd)
	{
       printf("invalid input");
       return;
	}

for(iCnt=iStart;iCnt<=iEnd;iCnt++)
{
	
	printf("%d\t",iCnt);
}








	}


















