using System;

class Test
{
public bool ChkBit(int no)
{
int iMask=0X00004000;

int iResult=0;

iResult=iMask&no;

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
int value=0;

Console.WriteLine("Enter the number");
value=Convert.ToInt32(Console.ReadLine());

Test obj=new Test();

bool res=obj.ChkBit(value);

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