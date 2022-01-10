#include<stdio.h>


void PrintEven(int iNo) 
{ 
int i=1;
if(iNo <= 0) 
{ 
iNo=-iNo; 
} 

for(i=1;i<=iNo;i++)
{
	
	if(((iNo%i)==0) && ((i%2)==0))
		printf("%d\t",i);
	
}
 
} 
int main()
{
int iValue = 0;

printf("Enter number\n");

scanf("%d",&iValue);

PrintEven(iValue);

return 0;
}