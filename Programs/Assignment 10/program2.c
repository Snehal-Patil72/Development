#include<stdio.h>

void Display(int,int);

int main()
{
	
	int iValue1=0,iValue2=0;
	
	printf("Enter Number of row\n");
	scanf("%d",&iValue1);
	
	printf("Enter Number of coloum\n");
	scanf("%d",&iValue2);
	
	Display(iValue1,iValue2);
	
	return 0;
}

void Display(int iRow,int iCol)
{
	
	int i=0,iCnt=0;
	
	
	for(i=1;i<=iRow;i++)
	{
		for(iCnt=1;iCnt<=iCol;iCnt++)
		{
			printf("%d \t",iCnt);
		}
		printf("\n");
	}
	
}
	
	
	
	
	
	
	
