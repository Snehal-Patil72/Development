using System;

class Test
{
public bool Search(string str,char c)
{
char []Arr=str.ToCharArray();
int i=0;

for(i=0;i<Arr.Length;i++)
{
if(Arr[i]==c)
break;
}
if(i==Arr.Length)
{
return false;
}
else
{
return true;
}

}	


}

class program
{
static void Main(string []arg)
{
Console.WriteLine("Enter String");
string name=Console.ReadLine();

Console.WriteLine("Enter the Charater");
char ch=Convert.ToChar(Console.ReadLine());

Test obj=new Test();

bool res=obj.Search(name,ch);

if(res==true)
{
	Console.WriteLine("char is present");
}
else
{
	Console.WriteLine("char is not present");
}

}	
}	