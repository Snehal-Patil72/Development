import java.util.*;


class StringX
{


public String str;


public StringX()
{

str=new String();

}
public void Accept()
{
Scanner sobj=new Scanner(System.in);

str=sobj.nextLine();

}

public void Display()
{
Scanner sobj=new Scanner(System.in);

System.out.println(str);
}

}

class Marvellous extends StringX
{

public Marvellous()
{

super();
}

public String ToUpper()
{
char Arr[]=str.toCharArray();

for(int i=0;i<Arr.length;i++)
{
if((Arr[i]>='a')  && (Arr[i]<='z'))
{

	Arr[i]=(char)(Arr[i]-32);
}

}

return new String(Arr);
}

}

class Program2
{

public static void main(String arg[])
{
Scanner sobj=new Scanner(System.in);
Marvellous mobj=new Marvellous();
System.out.println("Enter String");
mobj.Accept();
System.out.println(" String is");
mobj.Display();

String s=mobj.ToUpper();

System.out.println("lower: "+s);


}

}