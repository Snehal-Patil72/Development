
using System;

class Test
{

public int Areacal(int km)
{
	int ans;                                                                                                        
	
	ans=km*1000;

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

int iRet=obj.Areacal(kilo);

Console.WriteLine(iRet);

}
}