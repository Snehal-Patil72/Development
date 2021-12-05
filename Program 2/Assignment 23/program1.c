#include<stdio.h>

void Strlwrx(char *Brr)
{
	char *c=Brr;

while(*Brr!='\0')
{
	if((*Brr>='A') && (*Brr<='Z'))
	{
		*Brr=*Brr+32;
	}
	Brr++;
}
	printf("String : %s",c);




}

int main()
{
	char ch[30];
	printf("Enter String\n");
	scanf("%[^'\n']s",&ch);
	
     Strlwrx(ch);
	 
	
	return 0;
	
}

