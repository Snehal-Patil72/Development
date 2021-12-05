import java.lang.*;
import java.util.*;
import ArrayOperation.ArrayX;

class Marvellous extends ArrayX
{
public Marvellous(int length)
{

super(length);
	}

public int Product()
{
int i=0,icnt=0;
int result=1;
for(i=0;i<Arr.length;i++)
{
if((Arr[i]%2)!=0)
{
result=result*Arr[i];
icnt++;
}
}
if(icnt==0)
{
	result=0;
}
return result;
}	

}

class Program5
{

public static void main(String arg[])
{
int iSize=0;
Scanner sobj=new Scanner(System.in);

System.out.println(" Enter size of array");
iSize=sobj.nextInt();


Marvellous mobj=new Marvellous(iSize);

int iRet=0;

mobj.Accept();
mobj.Display();

iRet=mobj.Product();

System.out.println("product"+iRet);




}
}