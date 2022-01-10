import java.lang.*;
import java.util.*;
import ArrayOperation.ArrayX;


class Marvellous extends ArrayX
{

public Marvellous(int iValue)
{
super(iValue);
}

public int Product()
{
int iCnt=0,iMul=1,i=0;
for(iCnt=0;iCnt<Arr.length;iCnt++)
{
	if((Arr[iCnt]%2)!=0)
	{
iMul=iMul*Arr[iCnt];
i++;

}
}
if(i==0)
{
	iMul=0;
}
System.out.println(iMul);

return iMul;

}

}


class Program5

{
public static void main(String arg[])
{
	Scanner sobj=new Scanner(System.in);
	int iLength=0,iSearch=0;
int iret=0;

System.out.println("Enter the total Element of array");
iLength=sobj.nextInt();


Marvellous mobj=new Marvellous(iLength);

mobj.Accept();
mobj.Display();

iret=mobj.Product();



System.out.println("Product is: "+iret);

}
}