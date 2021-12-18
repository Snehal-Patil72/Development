using System;

class Test
{
public bool Check(int no1,int no2,int no3,int no4,int iNo)
{
int iMask1=0X00000001;
iMask1=iMask1<<no1-1;

int iMask2=0X00000001;
iMask2=iMask2<<no2-1;

int iMask3=0x00000001;
iMask3=iMask3<<no3-1;

int iMask4=0x00000001;
iMask4=iMask4<<no4-1;

int iMask=iMask1|iMask2|iMask3|iMask4;

int iResult=iNo&iMask;

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
int value=Convert.ToInt32(Console.ReadLine());


Console.WriteLine("Enter the first Bit to check");
int n1=Convert.ToInt32(Console.ReadLine());

Console.WriteLine("Enter the second Bit to check");
int n2=Convert.ToInt32(Console.ReadLine());

Console.WriteLine("Enter the third Bit to check");
int n3=Convert.ToInt32(Console.ReadLine());

Console.WriteLine("Enter the forth Bit to check");
int n4=Convert.ToInt32(Console.ReadLine());


Test obj=new Test();

bool res=obj.Check(n1,n2,n3,n4,value);

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