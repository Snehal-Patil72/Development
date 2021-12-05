import java.util.*;

class Demo
{
public int Count(int iNo)
{
int iDigit=0;
int Result=0;
while(iNo!=0)
{
iDigit=iNo%10;
System.out.println(iDigit);
if(iDigit==2)
{
	Result++;

}
iNo=iNo/10;

}
return Result;
	}
}

class Program3
{
public static void main(String arg[])
{
	Scanner sobj=new Scanner(System.in);
int iValue=0;
int iRet=0;
System.out.println("Enter the Number");
iValue=sobj.nextInt();

Demo dobj=new Demo();

iRet=dobj.Count(iValue);


	System.out.println("count="+iRet);


}
}