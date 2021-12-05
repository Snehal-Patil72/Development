import java.util.*;
import ArrayOperation.ArrayX;

class Marvellous extends ArrayX
{
public Marvellous(int length)
{
super(length);
}

public boolean DisplayDivide()
{
	int icnt=0,icnto=0,diff=0;
	boolean res=false;
for(int i=0;i<Arr.length;i++)
{
if(((Arr[i])==11) )
{
res=true;
break;

}

}
return res;
}
}
class Program3
{
public static void main(String arg[])
{
int iSize=0;
Scanner sobj=new Scanner(System.in);

System.out.println("Enter the size of Array");
iSize=sobj.nextInt();

Marvellous mobj=new Marvellous(iSize);

mobj.Accept();
//mobj.Display();

boolean iret=mobj.DisplayDivide();
if(iret==true)
{
System.out.println("no is present");
	}
else
{
System.out.println("no is not present");

}
}
	}