import java.util.*;


class Patern
{

public void Display(int iRcnt,int iCnt)
{
int i=0,j=1;


	for(i=iRcnt;i>=1;i--)
	{
		for(j=iCnt;j>=1;j--)
		{
     System.out.printf("%d\t",j);
     
 }
 
      System.out.printf("\n");

	}

}
}
class Program3
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int iRow=0,iCol=0;

		System.out.println("Enter no of rows");
		iRow=sobj.nextInt();

		System.out.println("Enter no of rows");
		iCol=sobj.nextInt();


     Patern pobj=new Patern();

     pobj.Display(iRow,iCol);

	}
}