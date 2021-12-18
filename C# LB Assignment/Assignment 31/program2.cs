using System;

class Test
{
public int Count(string str)
{
char []Arr=str.ToCharArray();
int icnt=0;

for(int i=0;i<Arr.Length;i++)
{
if((Arr[i]>='a') && (Arr[i]<='z'))
{
	icnt++;
}
}
return icnt;
}
}

class program
{
static void Main(string []arg)
{
string name;

Console.WriteLine("Enter String");
name=Console.ReadLine();

Test obj=new Test();
int res=obj.Count(name);

Console.WriteLine(res);
}
}