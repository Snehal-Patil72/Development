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

public int CountE(int no)
{
int i=0,icntE=0,icnt=0,diff=0;
for(i=0;i<Arr.Length;i++)
{
if(Arr[i]==no)
{
	icnt++;
}
}
return icnt;
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

Console.WriteLine("Enter the no to search");
int no=Convert.ToInt32(Console.ReadLine());


int iRet=obj.CountE(no);


Console.WriteLine(iRet);
}
}