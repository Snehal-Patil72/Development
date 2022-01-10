#include<stdio.h>

int Count(char *Brr)
{
int iCnt=0;
while(*Brr!='\0')
{
	if((*Brr==' '))
	{
		iCnt++;
	}
	Brr++;
}
return iCnt;
}

int main()
{
	char ch[30];
	int iRet=0;
	printf("Enter String\n");
	scanf("%[^'\n']s",&ch);
	
     iRet=Count(ch);
	 
	 printf("count=%d",iRet);
	
	return 0;
	
}

