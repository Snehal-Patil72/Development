import java.util.*;

class Demo
{

public float Area(int iNo)
{
float result=0.0f;

result=(float) (iNo*0.0929);

return result;

	}

}

class Program5
{
public static void main(String args[])
{
int value=0;

Scanner sobj=new Scanner(System.in);

System.out.println("Enter the kilometer");
value=sobj.nextInt();


Demo d=new Demo();

float iret=d.Area(value);

System.out.println(iret);
}
}