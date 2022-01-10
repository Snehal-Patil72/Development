import java.lang.*;
import java.util.*;

class StringX
{
public String str1;
public String str2;

public void Accept()
{
	Scanner sobj=new Scanner(System.in);
System.out.println("Enter String 1");
str1=sobj.nextLine();
System.out.println("Enter String 2");
str2=sobj.nextLine();
}

public void Display()
{

System.out.println(str1);
System.out.println(str2);

}
}

class Marvellous extends StringX
{

public String StringCatX(int No)
{

	char Arr1[]=new char[50];
	 Arr1=str1.toCharArray();
	 char Arr3[]=new char[50];
	     System.out.println(Arr3.length);
	     for(int i=0;i<Arr1.length;i++)
	     {
            Arr3[i]=Arr1[i];
	     }

	char Arr2[]=str2.toCharArray();
    int i=0;
    System.out.println(Arr1.length);
    int iStart=Arr1.length+1;
    int iend=0;
while(i<No)
{
     Arr3[iStart]=Arr2[iend];
     iStart++;
     iend++;
     i++;
}

	
	return new String(Arr3);
}
}

class Program1
{
public static void main(String arg[])
{
Scanner sobj=new Scanner(System.in);
int iValue=0;

Marvellous mobj=new Marvellous();
mobj.Accept();
mobj.Display();

System.out.println("Enter Number");
iValue=sobj.nextInt();

String res=mobj.StringCatX(iValue);

System.out.println(res);
	}
}