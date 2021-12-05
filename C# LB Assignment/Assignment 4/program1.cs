using System;

class Test
{
public void Display(int no)
{
int res=1;
for(int i=1;i<no;i++)
{
if((no%i)==0)
{
	res=res*i;
}
}
Console.WriteLine(res);
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