#include<stdio.h>
#include<stdbool.h>

bool Stringcount(char *Brr)
{
	while(*Brr!='\0')
	{
		if((*Brr=='a') || (*Brr=='e') || (*Brr=='i') || (*Brr=='o') || (*Brr=='u'))
		{
			return true;
		}
		else if((*Brr=='A') || (*Brr=='E') || (*Brr=='I') || (*Brr=='O') || (*Brr=='U'))
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
	bool bRet=false;
	printf("Enter String\n");
	scanf("%[^'\n']s",&ch);
	
	bRet=Stringcount(ch);
	
if(bRet==true)
{
	printf("It contain vowel\n");
}
else
{
		printf("It not contain vowel\n");
}
	return 0;
	
}