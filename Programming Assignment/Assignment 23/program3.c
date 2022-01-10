#include<stdio.h>

void Struprx(char *Brr)
{
	char *c=Brr;

while(*Brr!='\0')
{
	if((*Brr>='a') && (*Brr<='z'))
	{
		*Brr=*Brr-32;
	}
	else if((*Brr>='A') && (*Brr<='Z'))
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
	
     Struprx(ch);
	 
	
	return 0;
	
}

