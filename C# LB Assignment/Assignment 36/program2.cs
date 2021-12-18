using System;

class Test
{
public void Display(int iRow,int iCol)
{
int i=0,j=0;
char ch='A';

for(i=1;i<=iRow;i++)
{
	for(j=1;j<=iCol;j++,ch++)
	{ 
		if((i%2)==0)
		{
         Console.Write(((char)(ch+32))+"\t");
        }
        else
        {
                Console.Write(ch+"\t");
        }
	}
	ch='A';
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