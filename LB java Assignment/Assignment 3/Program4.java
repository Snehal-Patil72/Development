import java.util.*;


class Demo
{

public char Display(char c)
{
int i=0;
if((c>='A') && (c<='Z'))
{
	c=(char)(c+32);
}
else if((c>='a') && (c<='z'))
{
c=(char)(c-32);
}
return c;
}
}

class Program4
{
public static void main(String arg[])
{

Scanner sobj=new Scanner(System.in);

System.out.println("Enter the Character");
char ch=sobj.next().charAt(0);

Demo dobj=new Demo();

char word=dobj.Display(ch);

System.out.println(word);

}
}




















































































































































