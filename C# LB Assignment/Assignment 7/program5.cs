
using System;

class Test
{

public double Areacal(int km)
{
	double ans;                                                                                                        
	
	ans=km*0.0929;

	return ans;

}
}

class Demo
{

static void Main(string []arg)
{
int kilo;

Console.WriteLine("Enter the kilometer");
kilo=Convert.ToInt32(Console.ReadLine());


Test obj=new Test();

double iRet=obj.Areacal(kilo);

Console.WriteLine(iRet);

}
}