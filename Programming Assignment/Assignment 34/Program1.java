import java.lang.*;
import java.util.*;
import ArrayOperation.ArrayX;


class Marvellous extends ArrayX
{

public Marvellous(int iValue)
{
super(iValue);
}

public int CheckIndex(int iNo)
{
int iCnt=0,flag=-1;
for(iCnt=0;iCnt<Arr.length;iCnt++)
{
if(Arr[iCnt]==iNo)
{
	flag=iCnt;
	break;
}
}
return flag;
}
}


class Program1
{
public static void main(String arg[])
{
	Scanner sobj=new Scanner(System.in);
	int iLength=0,iSearch=0;
int iret=0;

System.out.println("Enter the total Element of array");
iLength=sobj.nextInt();

System.out.println("Enter Element to search");
iSearch=sobj.nextInt();

Marvellous mobj=new Marvellous(iLength);

mobj.Accept();
mobj.Display();

iret=mobj.CheckIndex(iSearch);

if(iret==-1)
{
	System.out.println("Number not present");
}
else
{
System.out.println("Index is: "+iret);
}
}
}