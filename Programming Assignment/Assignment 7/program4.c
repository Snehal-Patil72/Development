#include<stdio.h>

double CalCel(float);


int main()
{
float fValue=0;
double dRet=0.0;

printf("Enter Temperature in ferrit " );
scanf("%f",&fValue);

dRet=CalCel(fValue);

printf("Temp=%lf",dRet);

	return 0;
}

double CalCel(float fNo)
{

double dCel=0.0;

dCel=((fNo-32)*(5.0/9.0));

printf("%lf",dCel);

return dCel;
} 














