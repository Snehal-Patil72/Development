import java.util.*;



class Demo
{
public boolean Count(long iNo)
{

long iMask1=0x00000100;
long iMask2=0x00000800;

long iResult1=0;
long iResult2=0;

iResult1=iNo&iMask1;

iResult2=iNo&iMask2;

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

class Program4
{
public static void main(String args[])
{
Scanner sobj=new Scanner(System.in);
long l=0;

System.out.println("Enter the no");
l=sobj.nextLong();

Demo dobj=new Demo();

int value=(int) l;

boolean iRet=dobj.Count(value);
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