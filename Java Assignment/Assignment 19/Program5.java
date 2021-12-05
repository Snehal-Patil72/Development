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

public void CountDigit()
{
int iDigit=0,iCnt=0,count=0,temp=0,isum=0;	
for(int i=0;i<Arr.length;i++,isum=0)
{
	temp=Arr[i];
while(Arr[i]!=0)
{
iDigit=Arr[i]%10;
isum=isum+iDigit;
Arr[i]=Arr[i]/10;
}

System.out.println(isum);

}
}


}

class Program5
{
public static void main(String arg[])
{
Scanner sobj=new Scanner(System.in);
int iSize=0;
System.out.println("Enter Size of Array");
iSize=sobj.nextInt();

Marvellous mobj=new Marvellous(iSize);

mobj.Accept();
//mobj.Display();
mobj.CountDigit();

}

}