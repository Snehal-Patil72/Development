import java.util.*;



class Demo
{
public int Factor(int iNo)
{
int isumf=0,isum=0,idiff=0;
for(int i=1;i<iNo;i++)
{
if((iNo%i)!=0)
{
	System.out.println(i);
	isum=isum+i;
}
else
{
	isumf=isumf+i;

}
	}
	idiff=isum-isumf;
return idiff;
}
}

class Program5
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