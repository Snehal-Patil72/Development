#include<stdio.h>
int Display(int iNo)
{
int i=0,isum=0;
for(i=1;i<iNo;i++)
{
if((iNo%i)!=0)	
{
isum=isum+i;
}
}
return isum;
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