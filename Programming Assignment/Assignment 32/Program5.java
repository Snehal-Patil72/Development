import java.lang.*;
import java.util.*;

class Demo
{

public void Check(int Brr[])
{
for(int i=0;i<Brr.length;i++)
{
	if((Brr[i]%11)==0)
	{
		System.out.println("No "+Brr[i]);
	}
	
}
}
}

class Program5
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
d.Check(Arr);


	}
}
