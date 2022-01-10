#include<stdio.h>

char DisplayAlpha(char c)
{
	if((c>='A') && (c<='Z'))
	{
		return c+32;

	}
	else if((c>='a')  && (c<='z'))
    {
		return c-32;

	}
return c;
}



int main()
{
	char ch='\0';
	char cRet='\0';
	
	printf("Enter Character\n");
	scanf("%c",&ch);
	
	cRet=DisplayAlpha(ch);
	
	printf("Toggled letter is : %c\n",cRet);

	
	return 0;
}