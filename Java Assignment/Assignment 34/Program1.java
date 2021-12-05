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
	Scanner sobj=new Scanner(System.in);
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

boolean SearchNo(int iNo)
{
int i=0;
boolean result=false;
for(i=0;i<Arr.length;i++)
{
if(Arr[i]==iNo)
{
result=true;
break;
}
}
return result;
}	

}

class Program1
{

public static void main(String arg[])
{
int iSize=0;
Scanner sobj=new Scanner(System.in);

System.out.println(" Enter size of array");
iSize=sobj.nextInt();

System.out.println("Enter Number to search");
int no=sobj.nextInt();

Marvellous mobj=new Marvellous(iSize);

boolean bRet=false;

mobj.Accept();
mobj.Display();

bRet=mobj.SearchNo(no);

if(bRet==true)
{
	System.out.println("No is Present");
}
else
{
	System.out.println("No is not Present");

}


}
}