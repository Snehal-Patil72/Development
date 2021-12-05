import java.lang.*;
import java.util.*;

class Demo
{

public boolean CheckChar(String str)
{
	int i=0;
	boolean flag=false;
    for(i=0;i<str.length();i++)
    {
    	char ch=str.charAt(i);
        if((ch=='a') || (ch=='e') || (ch=='i') || (ch=='o') || (ch=='o'))
        {
           flag=true;
           break;
          
         }
         else if((ch=='A') || (ch=='E') || (ch=='I') || (ch=='O') || (ch=='U'))
         {
              flag=true;
              break;
                 
         }
    }
return flag;
	}

}

class Program4
{

public static void main(String arg[])
{

Scanner sobj=new Scanner(System.in);

System.out.println("Enter the String");
String s=sobj.nextLine();

Demo d=new Demo();
boolean bret=false;
bret=d.CheckChar(s);

System.out.println(bret);
	}
}