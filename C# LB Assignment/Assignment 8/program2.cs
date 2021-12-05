using System;

class Test
{

public void Display(int iNo1,int iNo2)
{
for(int i=iNo1;i<=iNo2;i++)
{
    if((i%2)==0)
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
     int val1,val2;

     Console.WriteLine("Enter first no");
     val1=Convert.ToInt32(Console.ReadLine());


    Console.WriteLine("Enter second no");
     val2=Convert.ToInt32(Console.ReadLine());

     Test obj=new Test();

     obj.Display(val1,val2);

	}
}