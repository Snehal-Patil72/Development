#include<stdio.h>
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo,UINT iBit1,UINT iBit2)
{
UINT iMask=0x00000001;
UINT iResult=0;
UINT temp=iNo;
UINT iCnt=0;
int i=0;

for(i=1;i<=32;i++)
{
iCnt=i;
iMask=iMask<<(iCnt-1);
iResult=(iMask&temp);
if((i>=iBit1) && (i<=iBit2))
{
	if(iResult==iMask)
	{
		temp=(temp^iMask);
		
	}
	else
	{
		temp=(temp|iMask);
	}
}
iMask=0x00000001;
}
iNo=temp;
return iNo;
}

int main()
{
	UINT iValue1=0,ipos1=0,ipos2=0;
UINT iRet=0;	
	printf("Enter Number1\n");
	scanf("%d",&iValue1);
	
	printf("Enter Position 1\n");
	scanf("%d",&ipos1);
	
    printf("Enter Position 2\n");
	scanf("%d",&ipos2);
		
	iRet=ToggleBit(iValue1,ipos1,ipos2);
	
   printf("Number:%d",iRet);

	return 0;
}