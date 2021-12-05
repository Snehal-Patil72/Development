import java.util.*;

class Demo
{

public void Display(int irow)
{
for(int i=1;i<=irow;i++)
{
System.out.printf("%d\t*\t",i);
}
}

}

class Program3
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