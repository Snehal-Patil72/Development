#include<stdio.h>

int Stringcount(char *Brr)
{
int iCnt=0;
while(*Brr!='\0')
{
if((*Brr>='A') && (*Brr<='Z'))
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
	
	iRet=Stringcount(ch);
	
	printf("Count = %d",iRet);
	
	return 0;
	
}