#include<stdio.h>

void Display(int);

int main()
{
	int iValue=0;
	
	printf("Enter Number");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	
	return 0;
}

void Display(int iNo)
{
	
	int iCnt=0;
	char ch='\0';
	
	for(iCnt=1,ch='A';iCnt<=iNo;iCnt++,ch++)
	{
		
		printf("%c\t",ch);
		
	}
	
}