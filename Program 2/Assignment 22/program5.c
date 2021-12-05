#include<stdio.h>

void Reverse(char *Brr)
{
	int iCnt=0,i=0;
	char *p=Brr;
	char temp='\0';
while(*Brr!='\0')
{
	iCnt++;
	Brr1++;
}
printf("%d\n",iCnt);		
printf("%s\n",Brr);		

for(i=0;i<iCnt/2;i++,iCnt--)
{
	printf("inside for\n");
	temp=Brr[i];
	printf("Brr1[i]=%c\n",*Brr);

	printf("temp=%c\n",temp);
	Brr[i]=Brr[iCnt-1];
	Brr[iCnt-1]=temp;
	
}
printf("%d\n",iCnt);		
//printf("%s",p);		

}



int main()
{
	char ch[30];
	printf("Enter String\n");
	scanf("%[^'\n']s",&ch);
	
     Reverse(ch);
	 
	
	return 0;
	
}