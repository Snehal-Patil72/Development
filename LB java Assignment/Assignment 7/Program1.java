import java.util.*;

class Demo
{

public float Area(float r)
{
float pi=3.14f,result=0.0f;

result=pi*r*r;

return result;

	}

}

class Program1
{
public static void main(String args[])
{
float rad=0.0f;

Scanner sobj=new Scanner(System.in);

System.out.println("Enter the radious");
rad=sobj.nextFloat();

Demo d=new Demo();

float fret=d.Area(rad);

System.out.println(fret);
}
}