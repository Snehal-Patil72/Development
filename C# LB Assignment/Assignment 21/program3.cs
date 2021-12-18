using System;


class Test
{
public void Display(char c)
{
if((c>='A') && (c<='Z'))
{
for(char l=c;l<='Z';l++)
{
Console.WriteLine(l);

}
}
else if((c>='a') && (c<='z'))
{
	for(char l=c;l<='z';l++)
{
Console.WriteLine(l);

}
}

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