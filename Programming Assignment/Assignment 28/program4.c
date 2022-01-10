#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

UINT ToggleBit(UINT No,UINT Bit1,UINT Bit2)
{
	UINT iMask1=0x00000001;
	iMask1=iMask1<<(Bit1-1);
	
	UINT iMask2=0x00000001;
	iMask2=iMask2<<(Bit2-1);
	
	UINT iResult1=0;
	UINT iResult2=0;
	
	
	
	iResult1=iMask1&No;
	iResult2=iMask2&No;

	
	if(iResult1==iMask1)
	{
	No=iMask1^No;
	
	}
	else
	{
		No=iMask1|No;
		
	}
	
	
	if(iResult2==iMask2)
	{
	No=iMask2^No;
	
	}
	
	else
	{
		No=iMask2|No;
		
	}
	return No;
}

int main()
{
	UINT iNo=0;
	UINT count1=0,count2=0;
	UINT iRet=0;
	printf("Enter the No\n");
	scanf("%d",&iNo);
	
	printf("Enter the bit 1 to check\n");
	scanf("%d",&count1);
	
	printf("Enter the bit 2 to check\n");
	scanf("%d",&count2);
	
	iRet=ToggleBit(iNo,count1,count2);
	
	printf("No after %d ,%d bit is off=%d",count1,count2,iRet);
	
	return 0;
	
}