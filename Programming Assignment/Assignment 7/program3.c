#include<stdio.h>


int CalMeter(int);

int main()
{

int iValue=0;
int iRet=0;

printf("Enter kilometer\n");
scanf("%d",&iValue);

iRet=CalMeter(iValue);


printf("Km in Meter=%d",iRet);


	return 0;
}

int CalMeter(int iNo)
{

int iMet=1000;

if(iNo<0)
{

iNo=-iNo;
}

iMet=iMet*iNo;

return iMet;

	}




















