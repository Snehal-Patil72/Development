using System;


class logic
{

public void Display(int no1,int no2)
{
for(int i=1;i<=no2;i++)
{
Console.WriteLine(no1);

	}
	}
	}

class Demo
{
static void Main(string []arg)
{
int value=0,value2=0;

Console.WriteLine("enter the no");
value=Convert.ToInt32(Console.ReadLine());

Console.WriteLine("enter secong=d no");
value2=Convert.ToInt32(Console.ReadLine());

logic obj=new logic();

obj.Display(value,value2);


}

}