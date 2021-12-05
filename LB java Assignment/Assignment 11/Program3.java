import java.util.*;

class Demo
{

public void Display(int irow,int icol)
{
char ch='A';
int i=0,j=0;

for(i=1;i<=irow;i++,ch++)
{
  for(j=1;j<=icol;j++)
  {
      System.out.printf("%c\t",ch);
  }
      System.out.printf("\n");

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

System.out.println("Enter no of col");
int col=sobj.nextInt();

Demo d=new Demo();

d.Display(row,col);
}
}