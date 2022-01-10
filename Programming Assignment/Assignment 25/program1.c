#include<stdio.h>
void StrCpyX(char *A,char *B)
{
	while(*A!='\0')
	{
	*B=*A;
     A++;
     B++;	 
	}
*B='\0';
}

int main()
{
	char Arr[40];
	char Brr[40];
	
	
	printf("Enter String\n");
	scanf("%[^'\n']s",Arr);
	
	StrCpyX(Arr,Brr);
	

	printf("String=%s",Brr);

	return 0;
}