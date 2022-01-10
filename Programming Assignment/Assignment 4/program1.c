#include<stdio.h>
int MultFact(int iNo)
{
int i=0,imul=1;
for(i=1;i<iNo;i++)
{
if((iNo%i)==0)	
{
	imul=imul*i;

}
}
return imul;
}
int main()
{
int iValue = 0;
int iRet = 0;
printf("Enter number");
scanf("%d",&iValue);
iRet = MultFact(iValue);
printf("%d",iRet);
return 0;
}