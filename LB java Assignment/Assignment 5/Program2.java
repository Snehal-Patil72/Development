import java.util.*;

class Demo
{
public boolean DisReverse(int iNo)
{
int iDigit=0;
boolean Result=false;
while(iNo!=0)
{
iDigit=iNo%10;
System.out.println(iDigit);
if(iDigit==0)
{
	Result=true;
	break;
}
iNo=iNo/10;

}
return Result;
	}
}

class Program2
{
public static void main(String arg[])
{
	Scanner sobj=new Scanner(System.in);
int iValue=0;
boolean bRet=false;
System.out.println("Enter the Number");
iValue=sobj.nextInt();

Demo dobj=new Demo();

bRet=dobj.DisReverse(iValue);

if(bRet==true)
{
	System.out.println("Number contain Zero");
}
else
{

	System.out.println("Number not contain Zero");

}

}
}