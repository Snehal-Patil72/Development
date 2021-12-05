#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

UINT ONBit(UINT No)
{
	UINT iMask=0x00000001;
	UINT Bit=0;
	int i=0;
	UINT iResult=0;
	
for(i=1;i<=4;i++)
{
Bit=i;
iMask=iMask<<(Bit-1);
iResult=iMask&No;	
	if(iResult!=iMask)
	{
	No=iMask|No;
	
	}
iMask=0x00000001;
//temp=No;
}	
	return No;
}

int main()
{
	UINT iNo=0;
	UINT count=0;
	UINT iRet=0;
	printf("Enter the No\n");
	scanf("%d",&iNo);
	
	
	iRet=ONBit(iNo);
	
	printf("No after bit is Toggle=%d",iRet);
	
	return 0;
	
}