using System;

class Test
{
public void Display(int iRow,int iCol)
{
	for(int i=1;i<=iRow;i++)
   {
      if((i>1) && (i<iRow))
      {
	for(int j=1;j<=iCol;j++)
	{
		if((j>1) && (j<iCol))
		{
           Console.Write("@\t");
		}
		else
		{
			Console.Write("*\t");
		}

	}

    }
    else
    {
       for(int k=1;k<=iCol;k++)
       {
       	Console.Write("*\t");
       }
    }
   		Console.WriteLine();
   
}
}
}

class program
{
static void Main(string []arg)
{
int row=0,col=0;

Console.WriteLine("enter The row");
row=Convert.ToInt32(Console.ReadLine());

Console.WriteLine("Enter the col");
col=Convert.ToInt32(Console.ReadLine());

Test obj=new Test();

obj.Display(row,col);

}
}	