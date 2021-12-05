#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

bool Chkchar(char *Brr,char c)
{

while(*Brr!='\0')
{
	
	if((*Brr)==c)
	{
		return true;
	}
	Brr++;
}	

return false;
}

int main()
{
	char ch[30];
	char word;
	bool bRet=false;
	

	printf("Enter the string\n");
	scanf("%[^'\n']s",&ch);
	
	
	printf("Enter the charater to search\n");
	fflush(stdin);
    scanf("%c",&word);
	 
	bRet=Chkchar(ch,word);
	
	if(bRet==true)
	{
		printf("Charater is present");
	}
	else
	{
	  printf("Charater is not present");
    }
	
	return  0;
}
	
	