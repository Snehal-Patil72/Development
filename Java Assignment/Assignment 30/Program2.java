import java.util.*;



class Demo
{
public void Count(long iNo,long iNo2)
{
long i=0;
long iMask1=0x00000001;
long iMask2=0x00000001;
long iResult1=0;
long iResult2=0;
long iResult=0;

for(i=1;i<=32;i++)
{
iResult1=iMask1&iNo;
iResult2=iMask2&iNo2;

iResult=iResult1&iResult2;
if(iResult!=0)
{
	System.out.println(i);
}
iMask1=iMask1<<1;
iMask2=iMask2<<1;


}
}

}


class Program2
{
public static void main(String args[])
{
Scanner sobj=new Scanner(System.in);
long l=0,lo;

System.out.println("Enter the no");
l=sobj.nextLong();

System.out.println("Enter 2 no");
lo=sobj.nextLong();

Demo dobj=new Demo();

int value=(int) l;
int value2=(int) lo;

dobj.Count(value,value2);

}

}