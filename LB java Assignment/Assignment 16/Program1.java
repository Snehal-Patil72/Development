import java.util.*;
import ArrayOperation.ArrayX;

class Marvellous extends ArrayX
{
public Marvellous(int length)
{
super(length);
}

public int Difference()
{
	int i=0,isume=0,isumo=0;
for(i=0;i<Arr.length;i++)
{
if((Arr[i])%2==0)
{
isume=isume+Arr[i];
}
else
{
	isumo=isumo+Arr[i];
}

}
int total=0;
total=isume-isumo;
return total;
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
mobj.Display();

int iRet=mobj.Difference();

System.out.println("R="+iRet);
	}
	}