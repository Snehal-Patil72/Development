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
Console.WriteLine("Enter elemnet");
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

public int Diff()
{
int Esum=0,Osum=0;

for(int i=0;i<Arr.Length;i++)
{
if((Arr[i]%2)==0)
{
Esum=Esum+Arr[i];
}
else
{
Osum=Osum+Arr[i];

}
}
int dif=Esum-Osum;
return dif;

}
}

class Program1
{
static void Main(string []arg)
{
int length;

Console.WriteLine("Enter size of array");
length=Convert.ToInt32(Console.ReadLine());

Test obj=new Test(length);

obj.Accept();
obj.Display();

int iRet=obj.Diff();

Console.WriteLine("Diff"+iRet);

}
}





