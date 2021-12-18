using System;

class ArrayX
{
public int []Arr;

public ArrayX(int size)
{
Arr=new int[size];

}	

public void Accept()
{
Console.WriteLine("Enter Element");
for(int i=0;i<Arr.Length;i++)
{
	Arr[i]=Convert.ToInt32(Console.ReadLine());
}

}

public void Display()
{
for(int i=0;i<Arr.Length;i++)
{
Console.WriteLine(Arr[i]);
}
}	
}


class Test:ArrayX
{

public Test(int iSize):base(iSize)
{

}

public void DisplayX()
{

for(int i=0;i<Arr.Length;i++)
{
	if((Arr[i]%5)==0)
	{
		Console.WriteLine(Arr[i]);
	}

}
}
}


class program
{
static void Main(string []arg)
{

Console.WriteLine("Enter size of array");
int length=Convert.ToInt32(Console.ReadLine());

Test obj=new Test(length);

obj.Accept();
obj.Display();

obj.DisplayX();

}
}	