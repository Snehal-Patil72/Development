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

public void DisplayX()
{
int iDigit=0,sum=0,temp=0;
for(int i=0;i<Arr.Length;i++)
{
	temp=Arr[i];
while(Arr[i]!=0)
{
iDigit=Arr[i]%10;
{
sum=sum+iDigit;
}
Arr[i]=Arr[i]/10;

}	
Console.WriteLine("res"+sum);
sum=0;
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
obj.DisplayX();

}
}