import java.lang.*;
import java.util.*;

class ArrayX
{
	Scanner sobj=new Scanner(System.in);
public int Arr[];

public ArrayX(int iSize)
{
	Arr=new int[iSize];
}

public void Accept()
{
int iCnt=0;
for(iCnt=0;iCnt<Arr.length;iCnt++)
{
Arr[iCnt]=sobj.nextInt();
}
}

public void Display()
{
int iCnt=0;
for(iCnt=0;iCnt<Arr.length;iCnt++)
{
	System.out.println(Arr[iCnt]);
}
}

}

class Marvellous extends ArrayX
{

public Marvellous(int iValue)
{
super(iValue);
}

public boolean CheckNum(int iNo)
{
int iCnt=0;
for(iCnt=0;iCnt<Arr.length;iCnt++)
{
if(Arr[iCnt]==iNo)
{
	break;
}
}
if(iCnt==Arr.length)
{
	return false;
}
else
{
	return true;
}
}
}


class Program1
{
public static void main(String arg[])
{
	Scanner sobj=new Scanner(System.in);
	int iLength=0,iSearch=0;
boolean bret=false;

System.out.println("Enter the total Element of array");
iLength=sobj.nextInt();

System.out.println("Enter Element to search");
iSearch=sobj.nextInt();

Marvellous mobj=new Marvellous(iLength);

mobj.Accept();
mobj.Display();

bret=mobj.CheckNum(iSearch);

if(bret==true)
{
System.out.println("Number present");
}
else
{
System.out.println("Number not present");

}
}
}