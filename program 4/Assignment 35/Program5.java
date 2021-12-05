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

public boolean ReverseT()
{
	char Arr2[]=new char[30];
	char Arr[]=str.toCharArray();
	
	
for(int j=0;j<Arr.length;j++)
{
if((Arr[j]>=65) && (Arr[j]<=90))
{
Arr[j]=(char)(Arr[j]+32);
}
}


for(int i=0;i<Arr.length;i++)
	{
     Arr2[i]=Arr[i];
     }

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


boolean flag=true;
for(int m=0;m<Arr.length;m++)
{
if(Arr2[m]!=Arr[m])
{
 flag=false;
}
}
return flag;
}
}


class Program5
{
public static void main(String arg[])
{
Scanner sobj=new Scanner(System.in);
int iValue=0;

Marvellous mobj=new Marvellous();
mobj.Accept();
mobj.Display();


boolean res=mobj.ReverseT();

if(res==true)
{
System.out.println("String is palidrom");
}	
else
{
System.out.println("String is not palidrom");


}
}
}