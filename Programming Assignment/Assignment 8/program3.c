#include<stdio.h>

int DisplayAdd(int,int);

int main()
{
int iValue1=0,iValue2=0;

int iRet=0;

printf("Enter Start value\n");
scanf("%d",&iValue1);

printf("Enter End value\n");
scanf("%d",&iValue2);


iRet=DisplayAdd(iValue1,iValue2);

printf("Addition=%d",iRet);

	return 0;

}

int DisplayAdd(int iStart,int iEnd)
{

int iCnt=0,iSum=0;

if(iStart<0 || iEnd<0)
{
	printf("Invalid input\n");
	return 0;
}
if(iStart>iEnd)
{
	printf("Invalid input\n");
	return 0;
}

for(iCnt=iStart;iCnt<=iEnd;iCnt++)
{

printf("%d\t",iCnt);

iSum=iSum+iCnt;

}
return iSum;
	}









