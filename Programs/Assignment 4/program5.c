#include<stdio.h>
int Display(int iNo)
{
int i=0,isumn=0,isumf=0,idiff=0;
for(i=1;i<iNo;i++)
{
if((iNo%i)!=0)	
{
isumn=isumn+i;
}
 else if((iNo%i)==0)	
{
isumf=isumf+i;
}
}
idiff=isumn-isumf;
return idiff;
}
int main()
{
int iValue = 0;
int iRet = 0;
printf("Enter number");
scanf("%d",&iValue);
 iRet=Display(iValue);
 printf("%d",iRet);
return 0;
}