import java.util.*;

class Demo
{

public void Display(int irow)
{
char ch='A';
for(int i=1;i<=irow;i++,ch++)
{
System.out.printf("%c\t",ch);
}
}

}

class Program1
{
public static void main(String args[])
{
Scanner sobj=new Scanner(System.in);

System.out.println("Enter no of row");
int row=sobj.nextInt();


Demo d=new Demo();

d.Display(row);
}
}