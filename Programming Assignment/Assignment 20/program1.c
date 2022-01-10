#include<stdio.h>
#include<stdbool.h>

bool CheckAlpha(char c)
{
	
if((c>='A') && (c<='Z'))
{
	return true;
}
else if((c>='a') && (c<='z'))
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
		printf("It is character\n");
	}
	else
	{
	printf("It is not character\n");

	}
	
	return 0;
}