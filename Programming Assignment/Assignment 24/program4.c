#include<stdio.h>
#include<stdlib.h>

int Chkchar(char *Brr,char c)
{
	int iCnt=0,i=0,iRet=-1;
	char *p=Brr;
	while(*Brr!='\0')
	{
		iCnt++;
		Brr++;
 }
for(i=iCnt;i>=0;i--)
{
	if(p[i]==c)
	{
		iRet=i;
	    break;
	}
}
return iRet;
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
	
	if(iRet==-1)
	{
	printf("charater not present");
	}
	else
	{
		printf("index: %d",iRet);
	}
	
	return  0;
}
	
	