using System;


class logic
{
public float Divide(int ino1,int ino2)
{
float ans=ino1/ino2;

return ans;


}
}


class demo
{
static void Main(string []arg)
{
int value1=0,value2=0;

Console.WriteLine("Enter the no 1");
value1=Convert.ToInt32(Console.ReadLine());

Console.WriteLine("Enter second number");
value2=Convert.ToInt32(Console.ReadLine());

logic obj=new logic();

float ret=obj.Divide(value1,value2);


Console.WriteLine(ret);

	}
}