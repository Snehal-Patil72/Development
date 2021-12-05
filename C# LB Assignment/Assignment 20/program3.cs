using System;

class Test
{

public bool Check(char c)
{

if((c>='0') && (c<='9') )
{
	return true;
}
else
{
	return false;
}
}

}
class progarm1
{
static void Main(string []arg)
{
char ch;

Console.WriteLine("Enter the character");
ch=Convert.ToChar(Console.ReadLine());

Test obj=new Test();

bool bret=obj.Check(ch);

if(bret==true)
{
	Console.WriteLine("TRUE");
}
else
{
	Console.WriteLine("FALSE");
}


}
}