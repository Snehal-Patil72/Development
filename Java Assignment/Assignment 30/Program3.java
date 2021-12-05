import java.util.*;



class Demo
{
public boolean Count(long iNo,int Bit1,int Bit2)
{
long iMask1=0x00000001;
iMask1=iMask1<<(Bit1-1);
long iMask2=0x00000001;
iMask2=iMask2<<(Bit2-1);

long iResult1=0;
long iResult2=0;

iResult1=iMask1&iNo;
iResult2=iMask2&iNo;

System.out.println(iResult1);
System.out.println(iResult2);

if((iResult1!=0) || (iResult2!=0))
{
	return true;
}
else
{
	return false;
}
}
}

class Program3
{
public static void main(String args[])
{
Scanner sobj=new Scanner(System.in);
long l=0;

System.out.println("Enter the no");
l=sobj.nextLong();

System.out.println("Enter bit 1");
int B1=sobj.nextInt();

System.out.println("Enter the no");
int B2=sobj.nextInt();

Demo dobj=new Demo();

int value=(int) l;

boolean iRet=dobj.Count(value,B1,B2);

if(iRet==true)
{
System.out.println("True");
}
else
{

System.out.println("False");

}

}
}