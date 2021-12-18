using System;

class Test
{
public uint Check(uint iNo)
{
uint iMask=0X00000240;

uint iResult=iMask^iNo;

return iResult;


}	
}

class program
{
public static void Main(string []arg)
{
Console.WriteLine("Enter Number");
uint value=Convert.ToUInt32(Console.ReadLine());


Test obj=new Test();

uint res=obj.Check(value);

Console.WriteLine(res);
}	

}	