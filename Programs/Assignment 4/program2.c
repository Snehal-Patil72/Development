#include<stdio.h>
void Display(int iNo)
{
int i=0,imul=1;
for(i=iNo-1;i>=1;i--)
{
if((iNo%i)==0)	
{
	printf("%d\t",i);

}
}
}
int main()
{
int iValue = 0;
int iRet = 0;
printf("Enter number");
scanf("%d",&iValue);
 Display(iValue);
return 0;
}