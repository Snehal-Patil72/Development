using System;

class Test
{

public string StrCpy(string str)
{
char []Arr=str.ToCharArray();
char []dest=new char[50];
int i=0,j=0;
for(i=Arr.Length-1,j=0;i>=0;i--,j++)
{
dest[j]=Arr[i];
}	
return new string(dest);
}

}

class program1
{
static void Main(string []arg)
{
Console.WriteLine("Enter the string");
string name=Console.ReadLine();

Test obj=new Test();

string iRes=obj.StrCpy(name);


Console.WriteLine(iRes);

}
}	