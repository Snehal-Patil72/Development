using System;

class Test
{
public int Count(int iNo)
{
int icnt=0;
   while(iNo!=0)
   {
   int iDigit=iNo%10;
   if((iDigit%2)==0)
   {
   	icnt++;
   }
   iNo=iNo/10;
   }

return icnt;
	}


}

class Demo
{
static void Main(string []arg)
{

int value=0;

Console.WriteLine("enter the no");
value=Convert.ToInt32(Console.ReadLine());

Test obj=new Test();

int iRet=0;

iRet=obj.Count(value);

Console.WriteLine(iRet);

	}

}