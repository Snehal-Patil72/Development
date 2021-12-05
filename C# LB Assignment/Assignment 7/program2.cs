using System;

class Test
{

public double Areacal(double ht,double wt)
{
	double ans;                                                                                                        
	
	ans=(wt*ht);

	return ans;

}
}

class Demo
{

static void Main(string []arg)
{
double ht,wh;

Console.WriteLine("Enter the height");
ht=Convert.ToDouble(Console.ReadLine());

Console.WriteLine("Enter the width");
wh=Convert.ToDouble(Console.ReadLine());

Test obj=new Test();

double dRet=obj.Areacal(ht,wh);

Console.WriteLine(dRet);

}
}