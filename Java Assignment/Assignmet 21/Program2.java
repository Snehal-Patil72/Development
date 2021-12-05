import java.util.*;
import StringX.StringX;


class Marvellous 
{



public void Dis(char ch)
{
if((ch>='A') && (ch<='Z'))
{
	for(char i=ch;i<='Z';i++)
	{
		System.out.println(i);
	}
}
else if((ch>='a') && (ch<='z'))
{

for(char i=ch;i>='a';i--)
	{
		System.out.println(i);
	}
} 
else
{
return;
}
}

}
class Program2
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