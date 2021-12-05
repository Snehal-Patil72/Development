#include<stdio.h>
#include<stdbool.h>

bool DisplayConvert ( char word) 
{ 
if((word=='a') || (word=='e') || (word=='i') || (word=='o') || (word=='u'))
{ 
 return true;
} 


return false;
} 
int main()
{
char cValue = '\0';
bool bret=false;
printf("Enter character\n");
scanf("%c",&cValue);
bret=DisplayConvert(cValue );

if(bret==true)
{
	printf("character is vowel\n");
}
else
{
	printf("character is not vowel\n");
	
}
return 0;
}
