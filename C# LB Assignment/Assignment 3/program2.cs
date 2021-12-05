using System;

class logic
{

public void Display(int no)
{

for(int i=1;i<=no;i++)
{

if(((no%i)==0) && ((i%2)==0))
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
      int value=0;

      Console.WriteLine("Enter no");
      value=Convert.ToInt32(Console.ReadLine());

      logic obj=new logic();


      obj.Display(value);

	}
}