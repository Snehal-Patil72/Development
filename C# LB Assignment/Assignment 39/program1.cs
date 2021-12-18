using System;

class Test
{
public void Display(string str)
{
char []Arr=str.ToCharArray();
int i=0,j=0;

for(i=0;i<Arr.Length-1;i++)
{
for(j=0;j<Arr.Length;j++)
{
if(j<=i)
{
	Console.Write(Arr[j]+"\t");
}
else
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
Console.WriteLine("Enter string");
string name=Console.ReadLine();

Test obj=new Test();

obj.Display(name);

}

}	