using System;



class Test
{
public void Display(int iRow,int iCol)
{
char ch='A';
for(int i=1;i<=iRow;i++)
{
	for(int j=1;j<=iCol;j++,ch++)
	{
       Console.Write(ch+"\t");
	}
	Console.WriteLine();
	ch='A';
}

}
}

class program
{
static void Main(string []arg)
{
Console.WriteLine("Enter number of roew");
int row=Convert.ToInt32(Console.ReadLine());

Console.WriteLine("Enter number of col");
int col=Convert.ToInt32(Console.ReadLine());

Test obj=new Test();

obj.Display(row,col);

}	
}