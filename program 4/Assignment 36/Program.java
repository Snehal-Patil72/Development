import java.util.*;


class Patern
{

public void Display(int iRcnt,int iCnt)
{
int i=0,j=0;
     char ch='A';
     char ch1='a';


	for(i=1;i<=iRcnt;i++)
	{
		for(j=1,ch='A',ch1='a';j<=iCnt;j++,ch++,ch1++)
		{
			if((i%2)==0)
			{
     System.out.printf("%c\t",ch1);

			}
			else
			{
     System.out.printf("%c\t",ch);
     }

 }
 
      System.out.printf("\n");

	}

}
}
class Program
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