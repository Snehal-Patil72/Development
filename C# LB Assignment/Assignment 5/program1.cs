using System;


class Test
{

public void Display(int no)
{

int iDigit=0;

while(no!=0)
{
iDigit=no%10;
Console.WriteLine(iDigit);
no=no/10;

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

     Test obj=new Test();

     obj.Display(value);


	}
}