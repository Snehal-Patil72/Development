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

public boolean StringCmpX(int No)
{
char Arr1[]=str1.toCharArray();
char Arr2[]=str2.toCharArray();
boolean flag=true;
int i=0;
int icnt=0;
while(i<No)
{
	if(Arr1[i]!=Arr2[i])
	{
		flag=false;
		icnt++;
		break;
	}
	i++;
}
System.out.println(icnt);
return flag;
}
}

class Program3
{
public static void main(String arg[])
{
Scanner sobj=new Scanner(System.in);
int iValue=0;

Marvellous mobj=new Marvellous();
mobj.Accept();
mobj.Display();

System.out.println("Enter number to compare");
iValue=sobj.nextInt();

boolean res=mobj.StringCmpX(iValue);

if(res==true)
{
System.out.println("String are equal");

}
else
{
	System.out.println("String are not equal");
}
	}
}