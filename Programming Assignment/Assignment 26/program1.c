#include<stdio.h>
void StrCatX(char *src,char *des)
{
	int iCnt=0,i=0, n=0;
	char *p=src;
	char temp='\0';
	while(*p!='\0')
	{
		iCnt++;
		*p++;
	}
	printf("%d\n",iCnt);
	n=iCnt/2;
for(i=0;i<n;i++,iCnt--)
{	
temp=src[i];
src[i]=src[iCnt-1];

src[iCnt-1]=temp;
}
printf("%s\n",src);
	
	while(*src!='\0' )
	{
		
	*des=*src;
     des++;
	src++;
	}
*des='\0';
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