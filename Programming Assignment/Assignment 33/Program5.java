import java.lang.*;
import java.util.*;

class Demo
{

public int CheckEven(int iNo)
{
int iDigit=0,iDiff=0,iEsum=0,iOsum=0;
if(iNo<0)
{
	iNo=-iNo;
}

while(iNo!=0)
{
	iDigit=iNo%10;
	if((iDigit%2)==0)
	{
    iEsum=iEsum+iDigit;
    }
    else
    {
    iOsum=iOsum+iDigit;
    }
	iNo=iNo/10;
}

iDiff=iEsum-iOsum;
return iDiff;
}
}

class Program5
{
	public static void main(String arg[])
	{
Scanner sobj=new Scanner(System.in);

int iValue=0;

System.out.println("Enter Number");
iValue=sobj.nextInt();

Demo d=new Demo();
int iRet=d.CheckEven(iValue);

System.out.println("Difference :"+iRet);

	}
}
