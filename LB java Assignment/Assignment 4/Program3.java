import java.util.*;



class Demo
{
public void Factor(int iNo)
{

for(int i=iNo-1;i>=1;i--)
{
if((iNo%i)!=0)
{
	System.out.println(i);
}
	}

}
}

class Program3
{
public static void main(String arg[])
{
int ivalue=0;

Scanner sobj=new Scanner(System.in);
System.out.println("Enter the no");
ivalue=sobj.nextInt();

Demo dobj=new Demo();

dobj.Factor(ivalue);
	


	}
}