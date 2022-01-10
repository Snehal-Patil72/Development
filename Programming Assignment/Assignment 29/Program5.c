#include<stdio.h>
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
UINT iMask=0x00000001;
UINT iResult=0;
UINT iBit=0;
int i=0;
UINT temp=0;
	temp=iNo;

for(i=1;i<=32;i++)
{
	iBit=i;
	iMask=iMask<<(iBit-1);
	iResult=(iMask&iNo);
	
	if((iBit>=1) && (iBit<=4))
	{
		printf("%d\n",iResult);
	if(iResult==iMask)
	{
		printf("bit was on\n");
		temp=(temp^iMask);
	}
	else
	{
          printf("bit was off\n");
		temp=(temp |iMask);
	}
	}
	
    if((iBit>=29) && (iBit<=32))
	{
		if(iResult==iMask)
	{
		printf("bit was on\n");
		temp=(temp^iMask);
	}
	else
	{
          printf("bit was off\n");
		temp=(temp |iMask);
	}	
	}

	 iMask=0x00000001;

}
iNo=temp;
return iNo;
}
int main()
{
	UINT iValue=0,iRet=0,ipos1=0,ipos2=0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	

		
	iRet=ToggleBit(iValue);
	
	printf("number after bit toggle :%d",iRet);
	
	return 0;
}