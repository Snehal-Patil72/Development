using System;

class logic
{
public void Display(int no)
{
for(int i=1;i<=no;i++)
{
	Console.WriteLine(2*i);
}

}

	}

class Demo
{
	static void Main(string []arg)
	{
      int value=0;

      Console.WriteLine("Enter no");
      value=Convert.ToInt32(Console.ReadLine());

      logic obj=new logic();

      obj.Display(value);


	}

}