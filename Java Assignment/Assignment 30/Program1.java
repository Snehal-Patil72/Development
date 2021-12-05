nimport java.util.*;



class Demo
{
public int Count(long iNo)
{
long i=0;
int iCnt=0;
long iMask=0x00000001;
long iResult=0;
for(i=1;i<=32;i++)
{
iResult=(iMask&iNo);

if(iResult!=0)
{
	iCnt++;
}

iMask=iMask<<1;
}
return iCnt;
}
}

class Program1
{
public static void main(String args[])
{
Scanner sobj=new Scanner(System.in);
long l=0;

System.out.println("Enter the no");
l=sobj.nextLong();

Demo dobj=new Demo();

int value=(int) l;

int iRet=dobj.Count(value);

System.out.println("count: "+iRet);
}

}