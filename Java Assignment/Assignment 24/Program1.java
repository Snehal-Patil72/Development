import java.util.*;
import StringX.StringX;


class Marvellous extends StringX
{

public Marvellous()
{
	super();
}

public boolean Check(char ch)
{
	boolean result=false;

char Arr[]=str.toCharArray();
for(int i=0;i<Arr.length;i++)
{
if(Arr[i]==ch)
{
	result=true;
}

}
return result;
}

}
class Program1
{
public static void main(String arg[])
{
Scanner sobj=new Scanner(System.in);

Marvellous mobj=new Marvellous();

mobj.Accept();
mobj.Display();

System.out.println("Enter the Character");
char c=sobj.next().charAt(0);

boolean bRet=false;

bRet=mobj.Check(c);

if(bRet==true)
{

System.out.println("TRUE");


}
else
{
System.out.println("FALSE");

}

}

}