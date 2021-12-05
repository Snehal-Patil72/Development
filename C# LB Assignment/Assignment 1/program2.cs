using System;

class logic
{

public bool Divide(int ino)
{
if(ino%5==0)
{
	return true;
}
else
{
	return false;
}
	}


	}




class Demo
{
static void Main(string []arg)
{
int value=0;

Console.WriteLine("Enter the no");
value=Convert.ToInt32(Console.ReadLine());

logic obj=new logic();

bool bret=obj.Divide(value);

if(bret==true)
{
	Console.WriteLine("no is divisible:");
}
else
{
Console.WriteLine("no is not divisible");

	}
}
}