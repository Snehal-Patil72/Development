using System;

class Test
{
public bool StringCat(string str1,string str2)
{

char []Arr=str1.ToCharArray();
char []Arr2=str2.ToCharArray();
int i=0,j=0;
bool flag=true;

for(i=0,j=0;(i<Arr.Length && j<Arr2.Length);i++,j++)
{
if(Arr[i]!=Arr2[j])
{
	flag=false;
}
}
if((j!=Arr2.Length) || (i!=Arr.Length))
{
return false;
}
else
{
return flag;
}
}

}

class program1
{
static void Main(string []arg)
{
string s1,s2;

Console.WriteLine("Enter the strin");
s1=Console.ReadLine();

Console.WriteLine("Enter second string");
s2=Console.ReadLine();


Test obj=new Test();

bool res=obj.StringCat(s1,s2);

if(res==true)
{
	Console.WriteLine("TRUE");
}
else
{
	Console.WriteLine("False");
}
}

}