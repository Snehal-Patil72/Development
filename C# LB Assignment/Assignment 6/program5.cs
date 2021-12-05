using System;

class Test
{
public int Count(int iNo)
{
int res=0,sume=0,sumo=0;
   while(iNo!=0)
   {
   int iDigit=iNo%10;
   if((iDigit%2)==0)
   {
      sume=sume+iDigit;
    }
    else
    {
      sumo=sumo+iDigit;
   }
   iNo=iNo/10;
   }

return (res=sumo-sume);
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