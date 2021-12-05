using System;

class Test
{

public void Check(char c)
{

if(c=='A')
{
Console.WriteLine("Exam at 7 Am");

}
else if(c=='B')
{

Console.WriteLine("Exam at 8.30 Am");
}
else if(c=='C')
{

Console.WriteLine("Exam at 9.20");

}
else if((c=='D') || (c=='d'))
{
	Console.WriteLine("Exam at 10.30");
}

}
}
class progarm1
{
static void Main(string []arg)
{
char ch;

Console.WriteLine("Enter the Division");
ch=Convert.ToChar(Console.ReadLine());

Test obj=new Test();

obj.Check(ch);



}
}