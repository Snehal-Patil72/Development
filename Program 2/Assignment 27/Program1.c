#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit(UINT iNo,UINT iBit)
{
	UINT iMask=0x00000001;
	iMask=iMask<<(iBit-1);
	UINT iResult=0;
	
if((iBit<1) || (iBit>32))
{
	return false;
}
	 
	 iResult=(iNo&iMask);
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
	UINT iValue=0,iPos=0;
	bool bRet=false;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	printf("Enter bit to check\n");
	scanf("%d",&iPos);
	
	
	bRet=CheckBit(iValue,iPos);
	
	if(bRet==true)
	{
		printf("%d bit is on",iPos);
	}
	else
	{
		printf("%d bit is off",iPos);
	}
	return 0;
}