#include<stdio.h>
void StrCpyX(char *src,char *des,int iCnt)
{
	while((*src!='\0') && (iCnt!=0) )
	{
	*des=*src;
     src++;
     des++;
     iCnt--;	 
	}
	printf("%d\n",iCnt);
*des='\0';
}

int main()
{
	char Arr[40];
	char Brr[40];
	int iNo=0;
	
	printf("Enter String\n");
	scanf("%[^'\n']s",Arr);
	
	printf("Enter Number of Charcter to copy\n");
	scanf("%d",&iNo);
	
	StrCpyX(Arr,Brr,iNo);
	

	printf("String=%s",Brr);

	return 0;
}