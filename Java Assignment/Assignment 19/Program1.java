import java.lang.*;
import java.util.*;

class ArrayX
{
public int Arr[];

public ArrayX(int size)
{

Arr=new int[size];

}

public void Accept()
{
	Scanner sobj=new Scanner(System.in);
int i=0;
for(i=0;i<Arr.length;i++)
{
	Arr[i]=sobj.nextInt();
}

}

public void Display()
{
int i=0;
for(i=0;i<Arr.length;i++)
{
	System.out.println(Arr[i]);

}

}
}
class Marvellous extends ArrayX
{

public Marvellous(int length)
{

super(length);

}

public int Largest()
{
	int iMax=Arr[0];
for(int i=0;i<Arr.length;i++)
{
if(Arr[i]>iMax)
{
	iMax=Arr[i];
}
}
return iMax;

}

}

class Program1
{
public static void main(String arg[])
{
Scanner sobj=new Scanner(System.in);
int iSize=0;
System.out.println("Enter Size of Array");
iSize=sobj.nextInt();

Marvellous mobj=new Marvellous(iSize);

mobj.Accept();
mobj.Display();
int iRet=mobj.Largest();
System.out.println("Largest element:"+iRet);

}

}