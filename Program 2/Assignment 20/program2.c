#include<stdio.h>
#include<stdbool.h>

bool CheckAlpha(char c)
{
	if((c>='A') && (c<='Z'))
	{
		return true;
	}
	
	return false;
}


int main()
{
	char ch='\0';
	bool bRet=false;
	
	printf("Enter the character\n");
	scanf("%c",&ch);
	
	bRet=CheckAlpha(ch);
	if(bRet==true)
	{
		printf("It is capital\n");
	}
	else
	{
	printf("It is not capital\n");

	}
	
	return 0;
}