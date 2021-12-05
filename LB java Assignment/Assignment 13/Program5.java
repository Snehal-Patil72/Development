import java.util.*;



class Demo
{
public void Display(int row,int col)
{
int i=0,j=0;
for(i=1;i<=row;i++)
{
if((i>1) && (i<row))
      {
       for(j=1;j<=col;j++)
           {
	         if((j>1)  && (j<col))
	         {
                     System.out.printf("*\t");
               }
               else
               {
                     System.out.printf("%d\t",j);

               }
            }
           
                System.out.printf("\n");
    }
    else 
        {
      for(int k=1;k<=col;k++)
      {

      	                     System.out.printf("%d\t",k);
}
                     System.out.printf("\n");

    }
}

}

}
class Program5
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