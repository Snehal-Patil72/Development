using System;


class test
{

public double AreaCal(double radius)
{
double ans=3.14*radius*radius;


return ans;
}

}


class demo
{
	static void Main(string []arg)
	{
       double res,rad;

       Console.WriteLine("Enter the radious");
       rad=Convert.ToDouble(Console.ReadLine());

       test obj=new test();

       res=obj.AreaCal(rad);

       Console.WriteLine(res);
	}
}