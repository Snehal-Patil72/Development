using System;


class logic
{
public void Display(int no)
{
if(no<10)
{
	Console.WriteLine("Hello");
}
else
{
	Console.WriteLine("Demo");
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

      obj.Display(value);

	}

}