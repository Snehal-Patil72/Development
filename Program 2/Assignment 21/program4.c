#include<stdio.h>
#include<stdbool.h>
bool Checksymbol(char c)
{
	if((c>='!') && (c<='*'))
	{
		return true;
	}
	else if((c=='@'))
	{
		return true;
	}
	return false;
}

int main()
{
	char ch='\0';
	bool bRet=false;
	
	printf("Enter character\n");
	scanf("%c",&ch);
	
	bRet=Checksymbol(ch);
	
	if(bRet==true)
	{
		printf("It is special symbol\n");
	}
	else
	{
	printf("It is not special symbol\n");
    }
	
	return 0;
}