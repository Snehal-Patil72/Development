using System;

class Test
{
public bool Count(string str)
{
char []Arr=str.ToCharArray();
int icnt=0;
int icntC=0;
for(int i=0;i<Arr.Length;i++)
{
if((Arr[i]=='a') || (Arr[i]=='e') || (Arr[i]=='i') || (Arr[i]=='o') || (Arr[i]=='u'))
{
return true;
}

}
return false;
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
bool res=obj.Count(name);

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