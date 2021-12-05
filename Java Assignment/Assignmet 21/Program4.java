import java.util.*;
import StringX.StringX;


class Marvellous 
{



public void Dis(char ch)
{

System.out.printf("%d",ch);
System.out.printf("%o",ch);
System.out.printf("%X",ch);

}

}
class Program4
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