#include<stdio.h>
void StrCatX(char *src,char *des)
{
	while(*src!='\0')
	{
		*src++;
	}
		
	while(*des!='\0' )
	{
		
	*src=*des;
     des++;
		src++;
	}
*src='\0';
}

int main()
{
	char Arr[40];
	char Brr[40];
	
	printf("Enter String1\n");
	scanf("%[^'\n']s",Arr);
	
	printf("Enter String2\n");
	fflush(stdin);
	scanf("%[^'\n']s",Brr);
	
	
	StrCatX(Arr,Brr);
	

	printf("String=%s",Arr);

	return 0;
}