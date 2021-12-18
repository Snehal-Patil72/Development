using System;

class Test
{
public void Display(int iRow,int iCol)
{
for(int i=1;i<=iRow;i++)
{
for(int j=1;j<=iCol;j++)
{
Console.Write(j+"\t");
}
Console.WriteLine();
}
}	
}

class program1
{
static void Main(string []arg)
{
int row=0,col=0;

Console.WriteLine("Enter row ");
row=Convert.ToInt32(Console.ReadLine());

Console.WriteLine("Enter col");
col=Convert.ToInt32(Console.ReadLine());

Test obj=new Test();

obj.Display(row,col);

}	
}	