using System;

class logic
{
public bool Display(char c)
{
if((c=='a') || (c=='e') || (c=='i')  || (c=='o') || (c=='u'))
{
	return true;
}
return false;
}


}

class Demo
{
static void Main(string []arg)
{
char ch='\0';

Console.WriteLine("enter char");
ch=Convert.ToChar(Console.ReadLine());

logic obj=new logic();

bool ret=obj.Display(ch);

if(ret==true)
{
Console.WriteLine("char is vowel");
}
else
{
Console.WriteLine("not vowel");
}

	}
}