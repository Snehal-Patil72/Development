import java.util.*;



class Demo
{
public void Display(String name)
{
char Arr[]=name.toCharArray();
int i=0;

for(i=0;i<Arr.length;i++)
{
	for(int j=0;j<Arr.length-i;j++)
	{
System.out.printf("%c\t",Arr[j]);
}
System.out.printf("\n");
}

for(i=Arr.length-1;i>=0;i--)
{
	for(int j=0;j<Arr.length-i;j++)
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
String str;
Scanner sobj=new Scanner(System.in);

System.out.println("Enter the String");
str=sobj.nextLine();

Demo dobj=new Demo();

dobj.Display(str);

}
}