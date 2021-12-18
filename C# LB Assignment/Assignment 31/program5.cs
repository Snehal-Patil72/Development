using System;

class Test
{
public string Count(string str)
{
char []Arr=str.ToCharArray();
int i=0;
int j=Arr.Length-1;
char temp;
for(i=0;i<Arr.Length/2;i++,j--)
{
temp=Arr[i];
Arr[i]=Arr[j];
Arr[j]=temp;
}
return new string(Arr);
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
string res=obj.Count(name);

Console.WriteLine(res);
}
}