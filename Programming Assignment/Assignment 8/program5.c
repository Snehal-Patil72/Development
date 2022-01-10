#include<stdio.h>

void DisplayEven(int,int);

int main()
{

int iValue1=0,iValue2=0;

printf("Enter Start Value");
scanf("%d",&iValue1);

printf("Enter End Value");
scanf("%d",&iValue2);

DisplayEven(iValue1,iValue2);

return 0;
}

void DisplayEven(int iStart,int iEnd)
{
int iCnt=0;

if(iStart>iEnd)
{
	printf("Invalid input\n");
	return;
}

for(iCnt=iEnd;iCnt>=iStart;iCnt--)
{


	printf("%d\t",iCnt);


}

}























