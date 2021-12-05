using System;

class Test
{

public void Display(int iNo)
{
char ch='A';
for(int i=1;i<=iNo;i++)
{
Console.Write((i*2)+"\t");
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