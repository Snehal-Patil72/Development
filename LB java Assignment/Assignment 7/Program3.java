import java.util.*;

class Demo
{

public int Area(int iNo)
{
int result=0;

result=iNo*1000;

return result;

	}

}

class Program3
{
public static void main(String args[])
{
int value=0;

Scanner sobj=new Scanner(System.in);

System.out.println("Enter the kilometer");
value=sobj.nextInt();


Demo d=new Demo();

int iret=d.Area(value);

System.out.println(iret);
}
}