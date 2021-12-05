import java.util.*;



class Demo
{
public void Display(int row,int col)
{
int i=0,j=0;
for(i=1;i<=row;i++)
{
for(j=1;j<=col;j++)
{
	if(j==i)
	{
System.out.printf("$\t");
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
class Program3
{
public static void main(String arg[])
{
int iRow=0,iCol=0;
Scanner sobj=new Scanner(System.in);

System.out.println("Enter the row");
iRow=sobj.nextInt();

System.out.println("Enter the col");
iCol=sobj.nextInt();

Demo dobj=new Demo();

dobj.Display(iRow,iCol);

}
}