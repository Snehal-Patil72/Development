#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

UINT CheckBit(UINT iNo,UINT iBit)
{
UINT iMask=0x00000001;
iMask=iMask<<(iBit-1);
UINT iResult=0;

iResult=(iMask&iNo);

if(iResult==iMask)
{
	iNo=(iNo^iMask);
}
return iNo;

}
int main()
{
	UINT iValue=0,ipos1=0;
	UINT iRet=0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	

		printf("Enter position of Bit 2\n");
	scanf("%d",&ipos1);
	
	iRet=CheckBit(iValue,ipos1);
	
	printf("Number after bit off:%d\n",iRet);

	return 0;
}