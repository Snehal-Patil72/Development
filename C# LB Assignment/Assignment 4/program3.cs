using System;

class Test
{
public void Display(int no)
{

int i=0;
for(i=1;i<no;i++)
{
if((no%i)!=0)
{
	Console.WriteLine(i);
}

	}
}

}

class Demo
{
static void Main(string []arg)
{

int value;

Console.WriteLine("Enter the no");
value=Convert.ToInt32(Console.ReadLine());

Test obj=new Test();

obj.Display(value);

	}

}