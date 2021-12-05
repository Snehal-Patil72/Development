#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit(UINT iNo,UINT iBit)
{
UINT iMask=0x00000001;
iMask=iMask<<(iBit-1);
UINT iResult=0;

iResult=(iMask&iNo);

if(iResult==iMask)
{
	return true;
}
else
{
	return false;
}


}
int main()
{
	UINT iValue=0,ipos1=0;
	bool bRet=false;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	

		printf("Enter position of Bit 2\n");
	scanf("%d",&ipos1);
	
	bRet=CheckBit(iValue,ipos1);
	
if(bRet==true)
{
printf("TRUE :bit on");
}
else
{	
printf("FALSE :bit off");
}
	return 0;
}