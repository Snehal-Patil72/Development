#include<stdio.h>
#include<stdlib.h>

int Chkchar(char *Brr,char c)
{
int icnt=0;
while(*Brr!='\0')
{
	
	if((*Brr)==c)
	{
		icnt++;
	}
	Brr++;
}	

return icnt;
}

int main()
{
	char ch[30];
	char word;
    int	iRet=0;

	printf("Enter the string\n");
	scanf("%[^'\n']s",&ch);
	
	
	printf("Enter the charater to search\n");
	fflush(stdin);
    scanf("%c",&word);
	 
	iRet=Chkchar(ch,word);
	
	
		printf("Count : %d",iRet);
	
	
	return  0;
}
	
	