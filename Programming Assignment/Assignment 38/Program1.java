import java.util.*;


class Patern
{

public void Display(String line)
{

char Arr[]=line.toCharArray();

for(int i=0;i<Arr.length;i++)
{
for(int j=0;j<Arr.length;j++)
{
	System.out.printf("%c\t",Arr[j]);
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

          String str;

		System.out.println("Enter the string");
           str=sobj.nextLine();
		

     Patern pobj=new Patern();

     pobj.Display(str);

	}
}