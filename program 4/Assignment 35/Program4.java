import java.lang.*;
import java.util.*;

class StringX
{
public String str;

public void Accept()
{
	Scanner sobj=new Scanner(System.in);
System.out.println("Enter String ");
str=sobj.nextLine();
}

public void Display()
{

System.out.println(str);

}
}

class Marvellous extends StringX
{

public String ReverseT()
{
	char Arr[]=str.toCharArray();
	int iStart=0;
	int iEnd=Arr.length-1;
	int i=0;
	char temp;
     while(iStart<iEnd)
     {
     temp=Arr[iStart];
     Arr[iStart]=Arr[iEnd];
     Arr[iEnd]=temp;
     iStart++;
     iEnd--;
     }

for(int j=0;j<Arr.length;j++)
{
if((Arr[j]>=65) && (Arr[j]<=90))
{
Arr[j]=(char)(Arr[j]+32);
}
else if((Arr[j]>=97) && (Arr[j]<=122))
{
	Arr[j]=(char)(Arr[j]-32);
	
}
}
return new String(Arr);
}
}


class Program4
{
public static void main(String arg[])
{
Scanner sobj=new Scanner(System.in);
int iValue=0;

Marvellous mobj=new Marvellous();
mobj.Accept();
mobj.Display();


String res=mobj.ReverseT();

System.out.println(res);
	}
}