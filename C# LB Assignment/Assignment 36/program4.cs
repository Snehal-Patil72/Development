using System;

class Test
{
public void Display(int iRow,int iCol)
{
int i=0,j=0;
char ch='A';

for(i=iRow;i>=1;i--)
{
	for(j=1;j<=iCol;j++)
	{ 
		
         Console.Write(i+"\t");
       
	}
		
   Console.WriteLine();
}
}


}	


class program
{
static void Main(string []arg)
{
Console.WriteLine("Enter no of row");
int row=Convert.ToInt32(Console.ReadLine());

Console.WriteLine("Enter number of col");
int col=Convert.ToInt32(Console.ReadLine());

Test obj=new Test();

obj.Display(row,col);


}	

}
