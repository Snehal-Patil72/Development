using System;

class Test
{

public int Display(int iNo1,int iNo2)
{
    if((iNo1<0) || (iNo2<0))
    {
     Console.WriteLine("invalid range");
     return 0;

    }
    if(iNo1>iNo2)
    {
     Console.WriteLine("invalid range");

        return 0;
    }
    int iSum=0;
for(int i=iNo1;i<=iNo2;i++)
{
    if((i%2)==0)
    {
iSum=iSum+i;
}    
}
return iSum;
}

}

	


class Demo
{
	static void Main(string []arg)
	{
     int val1,val2;

     Console.WriteLine("Enter first no");
     val1=Convert.ToInt32(Console.ReadLine());


    Console.WriteLine("Enter second no");
     val2=Convert.ToInt32(Console.ReadLine());

     Test obj=new Test();

     int iRet=obj.Display(val1,val2);

     Console.WriteLine(iRet);

	}
}