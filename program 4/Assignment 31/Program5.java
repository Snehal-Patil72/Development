import java.lang.*;
import java.util.*;

class Demo
{

public void CharReverse(String str)
{
	int i=0;
    System.out.println(str.length());
    int icnt=(str.length())-1;
    for(i=icnt;i>=0;i--)
    {
    	char ch=str.charAt(i);
       System.out.print(ch);
         }
    }
	

}

class Program5
{

public static void main(String arg[])
{

Scanner sobj=new Scanner(System.in);

System.out.println("Enter the String");
String s=sobj.nextLine();

Demo d=new Demo();
boolean bret=false;
d.CharReverse(s);

	}
}