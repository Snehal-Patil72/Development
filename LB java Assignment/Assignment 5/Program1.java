import java.util.*;

class Demo
{
public void DisReverse(int iNo)
{
int iDigit=0;
while(iNo!=0)
{
iDigit=iNo%10;
System.out.println(iDigit);
iNo=iNo/10;

}

	}
}

class Program1
{
public static void main(String arg[])
{
	Scanner sobj=new Scanner(System.in);
int iValue=0;
System.out.println("Enter the Number");
iValue=sobj.nextInt();

Demo dobj=new Demo();

dobj.DisReverse(iValue);


}
}