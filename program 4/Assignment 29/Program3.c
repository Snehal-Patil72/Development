#include<stdio.h>
typedef unsigned int UINT;

UINT OffBit(UINT iNo,UINT iBit)
{
UINT iMask=0x00000001;
iMask=iMask<<(iBit-1);

iNo=(iMask|iNo);

return iNo;
}
int main()
{
	UINT iValue=0,iRet=0,ipos1=0,ipos2=0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	

		printf("Enter position of Bit 2\n");
	scanf("%d",&ipos1);
	
	iRet=OffBit(iValue,ipos1);
	
	printf("number after bit off :%d",iRet);
	
	return 0;
}