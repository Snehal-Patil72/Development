#include<stdio.h>

double CalArea(float,float);

int main()
{
	float fHeight=0.0;
	float fWidth=0.0;
	double dRet=0.0;

	
	printf("Enter the Height\n");
	scanf("%f",&fHeight);

	printf("Enter the Width\n");
	scanf("%f",&fWidth);

	dRet=CalArea(fHeight,fWidth);

	printf("Area of Rectangle=%lf",dRet);

	return 0;	
}


double CalArea(float fHt,float fWt)
{

double dArea=0.0;

dArea=fWt*fHt;


return dArea;


}


















