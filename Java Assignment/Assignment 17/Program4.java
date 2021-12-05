nimport java.util.*;
import ArrayOperation.ArrayX;

class Marvellous extends ArrayX
{
public Marvellous(int length)
{
super(length);
}

public int DisplayDivide(int iNo)
{
	int icnt=0,icnto=0,diff=0;
	boolean res=false;
for(int i=0;i<Arr.length;i++)
{
if(((Arr[i])==iNo) )
{
icnt++;


}

}
return icnt;
}
}
class Program5
{
public static void main(String arg[])
{
int iSize=0;
Scanner sobj=new Scanner(System.in);

System.out.println("Enter the size of Array");
iSize=sobj.nextInt();

System.out.println("Enter the no");
int no=sobj.nextInt();

Marvellous mobj=new Marvellous(iSize);

mobj.Accept();
//mobj.Display();

int iret=mobj.DisplayDivide(no);

System.out.println("c"+iret);


}
}
	