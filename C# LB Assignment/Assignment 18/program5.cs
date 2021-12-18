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

public int CountE()
{
	int i=0,mul=1,icnt=0;
	for(i=0;i<Arr.Length;i++)
	{
		if((Arr[i]%2)!=0)
		{
	   mul=mul*Arr[i];
	    icnt++;
	    }
	}
	if(icnt!=0)
	{
	return mul;
}
else
{
	mul=0;
	return mul;
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


Test obj=new Test(length);
obj.Accept();
obj.Display();
int iRet=obj.CountE();

Console.WriteLine(iRet);
}
}