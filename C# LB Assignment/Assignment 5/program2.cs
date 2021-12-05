using System;


class Test
{

public bool Display(int no)
{

int iDigit=0;
int icnt=0;

while(no!=0)
{
iDigit=no%10;
if(iDigit==0)
{
	icnt++;
}
no=no/10;

}

if(icnt!=0)
{
	return true;
}
else
{
	return false;
}

	}

}

class Demo
{
	static void Main(string []arg)
	{
     int value=0;

     Console.WriteLine("Enter the no");
     value=Convert.ToInt32(Console.ReadLine());

     Test obj=new Test();

     bool ret=obj.Display(value);
  
     if(ret==true)
     {
     	Console.WriteLine("no contain zero");
     }
     else
     {
       Console.WriteLine("no does not contain zero");
     }

	}
}