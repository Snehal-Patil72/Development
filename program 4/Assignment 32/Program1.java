import java.lang.*;
import java.util.*;

class Demo
{

public int Check(int Brr[])
{
int esum=0,osum=0,diff=0;
for(int i=0;i<Brr.length;i++)
{
	if((Brr[i]%2)==0)
	{
		esum=esum+Brr[i];
	}
	else
	{
		osum=osum+Brr[i];
	}

}
diff=esum-osum;
return diff;
}
}

class Program1
{
	public static void main(String arg[])
	{
Scanner sobj=new Scanner(System.in);

int Arr[];
int size=0;

System.out.println("Enter total element of array");
size=sobj.nextInt();

Arr=new int[size];

System.out.println("Enter Elements");

for(int i=0;i<Arr.length;i++)
{
	Arr[i]=sobj.nextInt();
}

Demo d=new Demo();
int iRet=d.Check(Arr);

System.out.println("Summation :"+iRet);

	}
}
