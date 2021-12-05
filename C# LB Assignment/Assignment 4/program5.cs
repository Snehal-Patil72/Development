using System;


class Test
{

public void Display(int no)
{
int sumf=0,sumn=0,diff=0;
for(int i=1;i<no;i++)
{
	if((no%i)!=0)
	{

    sumn=sumn+i;
	}
	else
	{
     sumf=sumf+i;
	}
	}
	diff=sumf-sumn;
Console.WriteLine(diff);	
	}

	}

class Demo
{
static void Main(string []arg)
{

int value;

Console.WriteLine("Enter the no");
value=Convert.ToInt32(Console.ReadLine());

Test obj=new Test();

obj.Display(value);


	}


}