#include<stdio.h>
void StrCpyX(char *src,char *des)
{
	while(*src!='\0' )
	{
		if((*src>='a') && (*src<='z'))
		{
	*des=*src;
     des++;
		}
		src++;
	}
*des='\0';
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