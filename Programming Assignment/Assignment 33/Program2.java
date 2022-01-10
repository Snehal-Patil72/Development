import java.lang.*;
import java.util.*;

class Demo
{

public int CheckEven(int iNo)
{
int iDigit=0,icnt=0;
if(iNo<0)
{
	iNo=-iNo;
}

while(iNo!=0)
{
	iDigit=iNo%10;
	if((iDigit%2)!=0)
	{
		icnt++;
	}
	iNo=iNo/10;
}

return icnt;
}
}

class Program2
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
