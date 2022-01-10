#include<stdio.h>
void DisplayAlpha(char c)
{
if((c>='A') && (c<='Z'))
{
for(c=c;c<='Z';c++)
{
printf("%c\t",c);
}
}
else if((c>='a') && (c<='z'))
{
for(c=c;c>='a';c--)
{
printf("%c\t",c);
}
}

}

int main()
{
	
	char ch='\0';
	
	printf("Enter character\n");
	scanf("%c",&ch);
	
	DisplayAlpha(ch);
	
return 0;
}