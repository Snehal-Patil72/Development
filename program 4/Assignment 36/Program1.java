import java.util.*;


class Patern
{

public void Display(int iRcnt,int iCnt)
{
int i=0,j=0;
     char ch='A';


	for(i=1;i<=iRcnt;i++)
	{
		for(j=1,ch='A';j<=iCnt;j++,ch++)
		{
     System.out.printf("%c\t",ch);
     
 }
 
      System.out.printf("\n");

	}

}
}
class Program1
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