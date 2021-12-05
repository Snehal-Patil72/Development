using System;


class Test
{

public int Display(int iNo)
{
int iDigit=0,icnt=0;
int mul=1;
while(iNo!=0)
{
iDigit=iNo%10;
if(iDigit!=0)
{
mul=mul*iDigit;
}
iNo=iNo/10;
}
return mul;
}
}


class program1
{

	static void Main(string []arg)
	{
          int value=0;

          Console.WriteLine("Enter the no");
          value=Convert.ToInt32(Console.ReadLine());

          Test t=new Test();

          int iRet=t.Display(value);

            Console.WriteLine(iRet);
	}
}