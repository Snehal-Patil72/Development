#include<stdio.h>
int Stringcount(char *Brr)
{
	int iCnt1=0,iCnt2=0,iDiff=0;
	while(*Brr!='\0')
	{
	if((*Brr>='A') && (*Brr<='Z'))
	{
		iCnt1++;
	}
	else if((*Brr>='a') && (*Brr<='z'))
	{
		iCnt2++;
	}
	Brr++;
	}
	iDiff=iCnt2-iCnt1;
	return iDiff;
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