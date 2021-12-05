#include<stdio.h>
void StrCatX(char *src,char *des)
{

	while(*src!='\0' )
	{
	if((*src>='a') && (*src<='z'))
	{
       *src=*src-32;
	}		
	*des=*src;
     des++;
	src++;

*des='\0';
}
}

int main()
{
	char Arr[40];
	char Brr[40];
	
	printf("Enter String1\n");
	scanf("%[^'\n']s",Arr);
	

	
	StrCatX(Arr,Brr);
	

	printf("String=%s",Brr);

	return 0;
}