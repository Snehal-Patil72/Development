using System;

class logic
{
public bool Check(int no)
{
if((no%2)==0)
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

      bool ret=obj.Check(value);

      if(ret==true)
      {
      	Console.WriteLine("no is even");
      }
      else
      {
      	Console.WriteLine("no is odd");
      }
	}

}