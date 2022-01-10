#include<stdio.h>

void Display(char c)
{
	printf("Decimal=%d\n",c);
	printf("Octal=%o\n",i);
	printf("Hexadecimal=%x\n",c);

}
int main()
{
	char ch='\0';
	
	printf("Enter character\n");
	scanf("%c",&ch);
	
	Display(ch);
	
	
	
	return 0;
}