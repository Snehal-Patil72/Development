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
if((ch>=97) && (ch<=122))
{
	icnt++;
}
}
return icnt;
	}

}

class Program2
{

public static void main(String arg[])
{

Scanner sobj=new Scanner(System.in);

System.out.println("Enter the String");
String s=sobj.nextLine();

Demo d=new Demo();
int iRet=d.CheckChar(s);

System.out.println(iRet);
	}
}