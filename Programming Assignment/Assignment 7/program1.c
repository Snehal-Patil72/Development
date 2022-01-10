#include<stdio.h>

double CalArea(float);

int main()
{
float iRad=0.0;
double dRet=0.0;

printf("Enter Radious");
scanf("%f",&iRad);

dRet=CalArea(iRad);

printf("Area=%f",dRet);


}

double CalArea(float iNo)
{
float pi=3.14;
double dArea=0.0;

dArea=(pi*iNo*iNo);

return dArea;

}