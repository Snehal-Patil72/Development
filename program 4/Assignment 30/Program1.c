#include<stdio.h>
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
UINT iMask=0x00000001;
UINT iResult=0;
UINT iBit=0;
int i=0;
int iCnt=0;
UINT temp=0;
	temp=iNo;

for(i=1;i<=32;i++)
{
	iBit=i;
	iMask=iMask<<(iBit-1);
	iResult=(iMask&iNo);
	
	
	if(iResult==iMask)
	{
		iCnt++;
	}
	

	 iMask=0x00000001;

}
//iNo=temp;
return iCnt;
}
int main()
{
	UINT iValue=0,iRet=0,ipos1=0,ipos2=0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	

		
	iRet=ToggleBit(iValue);
	
	printf("bit count :%d",iRet);
	
	return 0;
}