import java.util.*;



class Demo
{
public int Factor(int iNo)
{
int iMul=1;
for(int i=1;i<iNo;i++)
{
if((iNo%i)==0)
{
	System.out.println(i);
	iMul=iMul*i;
}
	}
return iMul;
}
}

class Program1
{
public static void main(String arg[])
{
int ivalue=0;

Scanner sobj=new Scanner(System.in);
System.out.println("Enter the no");
ivalue=sobj.nextInt();

Demo dobj=new Demo();

int iRet=dobj.Factor(ivalue);
	
	System.out.println("Result :"+iRet);


	}
}