import java.util.*;
import ArrayOperation.ArrayX;

class Marvellous extends ArrayX
{
public Marvellous(int length)
{
super(length);
}

public void DisplayDivide()
{
	int i=0,isume=0,isumo=0;
for(i=0;i<Arr.length;i++)
{
if(((Arr[i])%5==0)  && ((Arr[i]%3)==0))
{
System.out.println(Arr[i]);
}
}

}
}
class Program4
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

mobj.DisplayDivide();
	}
	}