using System;

class Test
{

public void Display(int Row,int Col)
{
	int i=0,j=0;

for(i=1;i<=Row;i++)
{
	if((i>1) && (i<Row))
	{
	for(j=1;j<=Col;j++)
	{
		if((j>1) && (j<Col))
		{
           if(i==j)
           {
           	Console.Write("*\t");
           }
           else
           {
           	Console.Write("\t");
           }

		}
		else
		{
			Console.Write("*\t");
		}
	}
     }
     else
     {
     	for(int k=1;k<=Col;k++)
     	{
     		Console.Write("*\t");
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