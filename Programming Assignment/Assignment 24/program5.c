#include<stdio.h>
void StrRevx(char *Brr)
{
	int iCnt=0,i=0,k=0;
	char temp='\0';
	char *p=Brr;
	while(*p!='\0')
	{
		iCnt++;
		p++;
	}
	printf("%d\n",iCnt);
	k=iCnt/2;
	for(i=0;i<k;i++,iCnt--)
	{
		temp=Brr[i];
		printf("%c\n",temp);
		Brr[i]=Brr[iCnt-1];
		printf("b=%c\n",Brr[iCnt-1]);

		Brr[iCnt-1]=temp;

	}
   printf("%s",Brr);	
}


int main()
{
	char ch[30];
    int	iRet=0;

	printf("Enter the string\n");
	scanf("%[^'\n']s",&ch);
	
	

	StrRevx(ch);
	
	
	
	
	return  0;
}
	
	