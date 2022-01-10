import java.util.*;


class Patern
{

public void Display(int iRcnt,int iCnt)
{
int i=0,j=0;
     char ch='A';


	for(i=1,ch='A';i<=iRcnt;i++,ch++)
	{
		for(j=1;j<=iCnt;j++)
		{
     System.out.printf("%c\t",ch);
     
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