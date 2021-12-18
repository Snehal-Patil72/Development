using System;

class Test
{
public bool Check(uint iNo)
{
uint iMask=0X80000001;


uint iResult=iNo&iMask;

if(iResult==iMask)
{
	return true;
}
return false;
}	
}

class program
{
static void Main(string []arg)
{
Console.WriteLine("Enter the number");
uint value=Convert.ToUInt32(Console.ReadLine());


Test obj=new Test();

bool res=obj.Check(value);

if(res==true)
{

Console.WriteLine("Bit is on");

}
else
{
Console.WriteLine("Bit is off");
}	
}	
}	