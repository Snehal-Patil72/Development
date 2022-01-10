#include<stdio.h>

void DisplayAscii()
{
	int ch=0;
	printf("Hexa \t octal \t Decimal\t Char\t\n");
	for(ch=0;ch<=255;ch++)
	{
		printf("%x\t %o\t %d \t %c \t\n",ch,ch,ch,ch);
	}
}
int main()
{
	DisplayAscii();
	return 0;
}