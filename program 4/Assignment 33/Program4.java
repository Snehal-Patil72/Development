import java.lang.*;
import java.util.*;

class Demo
{

public int CheckEven(int iNo)
{
int iDigit=0,iMul=1;
if(iNo<0)
{
	iNo=-iNo;
}

while(iNo!=0)
{
	iDigit=iNo%10;
	if(iDigit!=0)
	{
	iMul=iMul*iDigit;
}
	iNo=iNo/10;
}

return iMul;
}
}

class Program4
{
	public static void main(String arg[])
	{
Scanner sobj=new Scanner(System.in);

int iValue=0;

System.out.println("Enter Number");
iValue=sobj.nextInt();

Demo d=new Demo();
int iRet=d.CheckEven(iValue);

System.out.println("Count :"+iRet);

	}
}
