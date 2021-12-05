import java.lang.*;
import java.util.*;
import ArrayOperation.ArrayX;

class Marvellous extends ArrayX
{
public Marvellous(int length)
{

super(length);
	}

int SearchNo(int iNo)
{
int i=0;
int result=-1;
for(i=0;i<Arr.length;i++)
{
if(Arr[i]==iNo)
{
result=i;
}
}
return result;
}	

}

class Program3
{

public static void main(String arg[])
{
int iSize=0;
Scanner sobj=new Scanner(System.in);

System.out.println(" Enter size of array");
iSize=sobj.nextInt();

System.out.println("Enter Number to search");
int no=sobj.nextInt();

Marvellous mobj=new Marvellous(iSize);

int iRet=0;

mobj.Accept();
mobj.Display();

iRet=mobj.SearchNo(no);

System.out.println("Index"+iRet);




}
}