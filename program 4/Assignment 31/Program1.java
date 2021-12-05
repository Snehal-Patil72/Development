import java.lang.*;
import java.util.*;

class Demo
{

public int CheckChar(String str)
{
int i=0;
int icnt=0;
for(i=0;i<str.length();i++)
{
	char ch=str.charAt(i);

	if((ch>=65) && (ch<=90))
	{
		icnt++;
	}
}
	return icnt;
}
	}

class Program1
{

public static void main(String arg[])
{

Scanner sobj=new Scanner(System.in);
Demo d=new Demo();
System.out.println("Enter the string");
String s=sobj.nextLine();

int iRet=d.CheckChar(s);

System.out.println(iRet);

}
}