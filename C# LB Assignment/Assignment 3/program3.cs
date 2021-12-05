using System;

class logic
{
public void Display(char c)
{
if((c>='a') && (c<='z'))
{
c=(char)(c-32);
	}

Console.WriteLine(c);
	}


}

class Demo
{
static void Main(string []arg)
{
char ch='\0';

Console.WriteLine("Enter the charcter");
ch=Convert.ToChar(Console.ReadLine());

logic obj=new logic();

obj.Display(ch);

}
}