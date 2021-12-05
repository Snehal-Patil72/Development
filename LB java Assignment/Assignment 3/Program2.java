import java.util.*;


class Demo
{

public void Display(int iNo)
{
int i=0;
for(i=1;i<=iNo;i++)
{
if(((iNo%i)==0) && ((i%2)==0))
{
System.out.println(i);
}

}
}
}

class Program2
{
public static void main(String arg[])
{
int iValue=0;
Scanner sobj=new Scanner(System.in);

System.out.println("Enter the Number");
iValue=sobj.nextInt();

Demo dobj=new Demo();

dobj.Display(iValue);



}
}




















































































































































