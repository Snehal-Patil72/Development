import java.util.*;
import ArrayOperation.ArrayX;

class Marvellous extends ArrayX
{
public Marvellous(int length)
{
super(length);
}

public int DisplayDivide()
{
	int icnt=0;
for(int i=0;i<Arr.length;i++)
{
if(((Arr[i])%2==0) )
{
	icnt++;
}
}
return icnt;
}
}
class Program1
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

int iret=mobj.DisplayDivide();

System.out.println("count"+iret);
	}
	}