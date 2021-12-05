import java.util.*;



class Demo
{
public long Count(long iNo,int Bit1,int Bit2)
{
int i=0;
long iResult=0;
long iMask=0x00000001;
for(i=1;i<=32;i++)
{
	if((i>=Bit1) && (i<=Bit2))
	{
     iResult=iNo^iMask;
      iNo=iResult;
	}

	iMask=iMask<<1;
}
return iResult;
}

}

class Program5
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

long iRet=dobj.Count(value,B1,B2);


System.out.println("no"+iRet);


}
}