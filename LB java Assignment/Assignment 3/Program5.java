import java.util.*;


class Demo
{

public boolean Display(char c)
{
int i=0;
if((c=='a') || (c=='e') || (c=='i') || (c=='o') || (c=='u'))
{
return true;
}
return false;
}
}
class Program5
{
public static void main(String arg[])
{

Scanner sobj=new Scanner(System.in);

System.out.println("Enter the Character");
char ch=sobj.next().charAt(0);

Demo dobj=new Demo();

boolean bRet=dobj.Display(ch);

if(bRet==true)
{
System.out.println("char is vowel");
}
else
{
System.out.println("char is not vowel");

}
}
}




















































































































































