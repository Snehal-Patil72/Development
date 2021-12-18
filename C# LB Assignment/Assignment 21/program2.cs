nusing System;


class Test
{
public void Display(char c)
{
if((c>='A') && (c<='Z'))
{
c=(char)(c+32);
}
else if((c>='a') && (c<='z'))
{
	c=(char)(c-32);
}
Console.WriteLine(c);

}	

}


class program
{
static void Main(string []arg)
{
	char ch;

	Console.WriteLine("Enter Character");
	ch=Convert.ToChar(Console.ReadLine());

	Test obj=new Test();

	obj.Display(ch);

}	

}	