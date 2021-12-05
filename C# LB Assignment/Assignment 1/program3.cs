using System;


class logic 
{

public void Display(int no)
{
int i=1;

for(i=1;i<=no;i++)
{

Console.WriteLine("*");

}
	}
	}


class Demo
{
	static void Main(string []arg)
	{
     int value=0;

     Console.WriteLine("enter the no");
     value=Convert.ToInt32(Console.ReadLine());

     logic obj=new logic();

     obj.Display(value);


	}

}