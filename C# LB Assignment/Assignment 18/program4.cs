using System;

class ArrayX
{
public int []Arr;

public ArrayX(int iSize)
{
Arr=new int[iSize];
}

public void Accept()
{
Console.WriteLine("Enter Elemnet");

for(int i=0;i<Arr.Length;i++)
{
Arr[i]=Convert.ToInt32(Console.ReadLine());
}
}

public void Display()
{
Console.WriteLine("Elements");
for(int i=0;i<Arr.Length;i++)
{

Console.WriteLine(Arr[i]);
}

}


}

class Test:ArrayX
{

public Test(int Asize):base(Asize)
{
}

public void CountE(int iNo1,int iNo2)
{
	int i=0,icnt=-1;
	for(i=0;i<Arr.Length;i++)
	{
		if((Arr[i]>iNo1) && (Arr[i]<iNo2))
		{
	   Console.WriteLine(Arr[i]);
	
	    }
	}
	
}

}

class program1
{

static void Main(string []arg)
{
int length=0;

Console.WriteLine("Enter size of Array");
length=Convert.ToInt32(Console.ReadLine());


Console.WriteLine("Enter start range");
int no1=Convert.ToInt32(Console.ReadLine());

Console.WriteLine("enter end range");
int no2=Convert.ToInt32(Console.ReadLine());

Test obj=new Test(length);
obj.Accept();
obj.Display();
obj.CountE(no1,no2);

}
}