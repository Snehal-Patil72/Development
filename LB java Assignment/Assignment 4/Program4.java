import java.util.*;



class Demo
{
public int Factor(int iNo)
{
int isum=0;
for(int i=iNo-1;i>=1;i--)
{
if((iNo%i)!=0)
{
	System.out.println(i);
	isum=isum+i;
}
	}
return isum;
}
}

class Program4
{
public static void main(String arg[])
{
int ivalue=0;

Scanner sobj=new Scanner(System.in);
System.out.println("Enter the no");
ivalue=sobj.nextInt();

Demo dobj=new Demo();

int iRet=dobj.Factor(ivalue);
	
	System.out.println("Reault"+iRet);



	}
}