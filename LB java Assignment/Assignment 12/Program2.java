import java.lang.*;
import java.util.*;


class Demo
{

public void Display(int Row,int Col)
{
	int i=0,j=0;

	for(i=4;i>=1;i--)
	{
      for(j=1;j<=Col;j++)
      {
      	if(j<=i)
      	{
      	System.out.printf("*\t");
      }
      else
      {

      	System.out.printf("#\t");
        }
}
System.out.printf("\n");
}

}
}
class Program2
{
	public static void main(String arg[])
	{
       Scanner sobj=new Scanner(System.in);

       System.out.println("Enter the no of rows");
       int irow=sobj.nextInt();

        System.out.println("Enter the no of rows");
       int icol=sobj.nextInt();


       Demo dobj=new Demo();

       dobj.Display(irow,icol);


       

	}

}