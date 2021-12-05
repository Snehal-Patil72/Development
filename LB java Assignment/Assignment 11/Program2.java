import java.util.*;

class Demo
{

public void Display(int irow,int icol)
{
char ch='A',c='a';
int i=0,j=0;

for(i=1;i<=irow;i++)
{
	for(j=1;j<=icol;j++,ch++,c++)
	{
		if((i%2)!=0)
		{
      System.out.printf("%c\t",ch);
  }
  else
  {

      System.out.printf("%c\t",c);

  }
	}
      System.out.printf("\n");
      ch='A';
      c='a';

}
}

}

class Program2
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