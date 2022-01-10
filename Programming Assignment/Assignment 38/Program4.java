import java.util.*;


class Patern
{

public void Display(String line)
{

char Arr[]=line.toCharArray();

for(int i=0;i<Arr.length;i++)
{
	int k=0;
while(k<Arr.length-i)
{
System.out.printf("%c\t",Arr[k]);

k++;
}	
System.out.printf("\n");

}

for(int i=0;i<Arr.length;i++)
{
for(int j=0;j<(i+1);j++)
{
	System.out.printf("%c\t",Arr[j]);
}
System.out.printf("\n");
}     
	
}
}
class Program4
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