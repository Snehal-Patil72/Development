import java.util.*;
import StringX.StringX;


class Marvellous 
{



public void Dis(char ch)
{
if((ch>='A') && (ch<='Z'))
{
ch=(char) (ch+32);
}
else
{

ch=(char)(ch-32);

} 
System.out.println(ch);

}

}
class Program1
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