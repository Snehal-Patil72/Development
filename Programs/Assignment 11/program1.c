#include<stdio.h>

void Display(int iRow,int iCol)
{
int i=0,j=0;
char ch='\0';

for(i=0;i<iRow;i++)
{
	
	for(j=0,ch='A';j<iCol;j++,ch++)
	{
		printf("%c\t",ch);
	}
	printf("\n");
}


}
int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter Number of row\n");
	scanf("%d",&iValue1);
	
	printf("Enter Number of column\n");
	scanf("%d",&iValue2);
	
	Display(iValue1,iValue2);
	
	return 0;
	
	
	
}