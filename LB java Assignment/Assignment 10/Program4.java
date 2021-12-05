
import java.util.*;


class Demo
{

public void Display(int row,int col)
{
int j=0,i=0;

for(i=1;i<=row;i++)
{
for(j=1;j<=col;j++)
{
	if((j%2)==0)
	{
System.out.printf("#\t");
}
else
{
System.out.printf("*\t");

}
}
System.out.printf("\n");
}
}
	}


class Program4
{
public static void main(String args[])
{

Scanner sobj=new Scanner(System.in);
int r=0,c=0;

System.out.println("Enter no row");
r=sobj.nextInt();

System.out.println("Enter no col");
c=sobj.nextInt();

Demo d=new Demo();

d.Display(r,c);


}
}