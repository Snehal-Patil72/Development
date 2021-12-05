#include<stdio.h>

void CheckTime(char c)
{
if((c>='a') && (c<='z'))
{
	c=c-32;	
}
if(c=='A')
{
	printf("Your Exam at 7 Am");
}
else if(c=='B')
{
	printf("Your Exam at 8.30 Am");
}
else if(c=='C')
{
	printf("Your Exam at 9.20 Am");
}
else if(c=='D')
{
	printf("Your Exam at 10.30 Am");
}
else
{
printf("Wrong Division\n");

}
}
int main()
{
	char ch='\0';
	
	printf("Enter the your Division\n");
	scanf("%c",&ch);
	
     CheckTime(ch);
	
	
	return 0;
}