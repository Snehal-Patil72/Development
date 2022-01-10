#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

void ToggleBit(UINT iNo1,UINT iNo2)
{
UINT iMask1=0x00000001;
UINT iResult1=0;
UINT iBit1=0;
int i=0;
int iCnt=0;
UINT temp=0;
UINT iMask2=0x00000001;
UINT iResult2=0;
UINT iBit2=0;
	bool flag=false;


for(i=1;i<=32;i++)
{
	iBit1=i;
	iMask1=iMask1<<(iBit1-1);
	iResult1=(iMask1&iNo1);
	iBit2=i;
	iMask2=iMask2<<(iBit2-1);
	iResult2=(iMask2&iNo2);
	if((iResult1==iMask1) && (iResult2==iMask2))
	{
		flag=true;
	}
     if(flag==true)
	 {
		printf("pos:%d\n",i);
	 } 

	 iMask1=0x00000001;
	 iMask2=0x00000001;
flag=false;
}
//iNo=temp;
 
}
int main()
{
	UINT iValue1=0,iValue2=0;
	
	printf("Enter Number1\n");
	scanf("%d",&iValue1);
	
	printf("Enter Number2\n");
	scanf("%d",&iValue2);
	

		
	ToggleBit(iValue1,iValue2);
	
	//printf("bit count :%d",iRet);
	
	return 0;
}