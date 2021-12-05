import java.util.*;
import StringX.StringX;


class Marvellous 
{



public void Dis(char ch)
{
if((ch=='@') || (ch=='!') || (ch=='&'))
{
	System.out.println("True");
}
else
{
	System.out.println("false");

}
}

}
class Program3
{
public static void main(String arg[])
{
Scanner sobj=new Scanner(System.in);

Marvellous mobj=new Marvellous();

System.out.println("Enter the character");
char c=sobj.next().charAt(0);


mobj.Dis(c);





}

}