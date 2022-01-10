#include<stdio.h>

double CalArea(int);

int main()
{

int iValue=0;
double dRet=0.0;

printf("Enter Area\n");
scanf("%d",&iValue);

dRet=CalArea(iValue);


printf("Area=%lf",dRet);

	return 0;

}

double CalArea(int iNo)
{
double dMet=0.0929;

dMet=dMet*iNo;

return dMet;

}










