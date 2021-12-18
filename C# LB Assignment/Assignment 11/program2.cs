using System;



class Test
{
public void Display(int iRow,int iCol)
{
char ch='A',c='a';
for(int i=1;i<=iRow;i++)
{
	for(int j=1;j<=iCol;j++,ch++,c++)
	{
		if((i%2)!=0)
		{
       Console.Write(ch+"\t");
       }
       else
       {

           Console.Write(c+"\t");
       }
	}
	Console.WriteLine();
	ch='A';
	c='a';
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