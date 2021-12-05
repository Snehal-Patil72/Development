import java.util.*;

class Demo
{

public float Area(float h,float w)
{
float result=0.0f;

result=h*w;

return result;

	}

}

class Program2
{
public static void main(String args[])
{
float hei=0.0f,wid=0.0f;

Scanner sobj=new Scanner(System.in);

System.out.println("Enter the radious");
hei=sobj.nextFloat();

System.out.println("Enter the radious");
wid=sobj.nextFloat();

Demo d=new Demo();

float fret=d.Area(hei,wid);

System.out.println(fret);
}
}