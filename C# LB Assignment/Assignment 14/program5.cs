using System;

class Test
{

public void Display(int Row,int Col)
{
	int i=0,j=0;

for(i=1;i<=Row;i++)
{
	for(j=1;j<=Col;j++)
	{
		if(j>=i)
		{
			Console.Write(j+"\t");
		}
		else
		{
			Console.Write(" \t");
		}
	}
	Console.WriteLine();

}

}

}
class program1
{
	static void Main(string []arg)
	{
       int val1,val2;

       Console.WriteLine("Enter no of rows");
       val1=Convert.ToInt32(Console.ReadLine());

       Console.WriteLine("Enter no of col");
       val2=Convert.ToInt32(Console.ReadLine());

       Test obj=new Test();

        obj.Display(val1,val2);

	}
}