import java.lang.*;
import java.util.*;
import ArrayOperation.ArrayX;

class Marvellous extends ArrayX
{
public Marvellous(int length)
{

super(length);
	}

public void Display(int isrc,int idest)
{
int i=0;
for(i=0;i<Arr.length;i++)
{
if((Arr[i]>=isrc) && (Arr[i]<=idest))
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

System.out.println(" Enter size of array");
iSize=sobj.nextInt();

System.out.println("Enter starting range");
int start=sobj.nextInt();

System.out.println("Enter Ending range");
int End=sobj.nextInt();

Marvellous mobj=new Marvellous(iSize);



mobj.Accept();
//mobj.Display();

mobj.Display(start,End);




}
}