#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool ToggleBit(UINT iNo,UINT iBit1,UINT iBit2)
{
UINT iMask1=0x00000001;
UINT iResult1=0;
int i=0;
UINT iMask2=0x00000001;
UINT iResult2=0;
bool flag=false;



	iMask1=iMask1<<(iBit1-1);
	iResult1=(iMask1&iNo);
	
	iMask2=iMask2<<(iBit2-1);
	iResult2=(iMask2&iNo);
	if((iResult1==iMask1) && (iResult2==iMask2) )
	{
		return true;
	}
	
	return false;
	 
}
int main()
{
	UINT iValue1=0,ipos1=0,ipos2=0;
	bool bRet=false;
	
	printf("Enter Number1\n");
	scanf("%d",&iValue1);
	
	printf("Enter Position 1\n");
	scanf("%d",&ipos1);
	
    printf("Enter Position 2\n");
	scanf("%d",&ipos2);
		
	bRet=ToggleBit(iValue1,ipos1,ipos2);
	
if(bRet==true)
{	
			printf("Bits are on");
}
else
{
			printf("Bits are off");
}	

	return 0;
}