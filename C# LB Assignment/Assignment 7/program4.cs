
using System;

class Test
{

public double Areacal(int km)
{
	double ans;                                                                                                        
	
	ans=((km-32)*(5.0/9.0));

	return ans;

}
}

class Demo
{

static void Main(string []arg)
{
int temp;

Console.WriteLine("Enter the kilometer");
temp=Convert.ToInt32(Console.ReadLine());


Test obj=new Test();

double iRet=obj.Areacal(temp);

Console.WriteLine(iRet);

}
}