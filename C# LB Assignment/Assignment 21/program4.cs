using System;


class Test
{
public bool Display(char c)
{
if((c=='!') || (c=='@'))
{
return true;
}
else
{
	return false;
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

	bool res=obj.Display(ch);

    Console.WriteLine(res);
}	

}	