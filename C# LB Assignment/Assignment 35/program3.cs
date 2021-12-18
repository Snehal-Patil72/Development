using System;

class Test
{
public bool StringCat(string str1,string str2,int no)
{

char []Arr=str1.ToCharArray();
char []Arr2=str2.ToCharArray();
int i=0,j=0;
bool flag=true;

for(i=0,j=0;(i<no && j<no);i++,j++)
{
if(Arr[i]!=Arr2[j])
{
	flag=false;
}
}

return flag;

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

Console.WriteLine("Enter the number to compare");
int value=Convert.ToInt32(Console.ReadLine());

Test obj=new Test();

bool res=obj.StringCat(s1,s2,value);

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