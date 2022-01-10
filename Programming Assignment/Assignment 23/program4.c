#include<stdio.h>

void Struprx(char *Brr)
{
	char *c=Brr;

while(*Brr!='\0')
{
	if((*Brr>='0') && (*Brr<='9'))
	{
		printf("%c\t",*Brr);
	}
	Brr++;
}

}

int main()
{
	char ch[30];
	printf("Enter String\n");
	scanf("%[^'\n']s",&ch);
	
     Struprx(ch);
	 
	
	return 0;
	
}

