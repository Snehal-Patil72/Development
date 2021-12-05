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

public String ToLower()
{
char Arr[]=str.toCharArray();

for(int i=0;i<Arr.length;i++)
{
if((Arr[i]>='A')  && (Arr[i]<='Z'))
{

	Arr[i]=(char)(Arr[i]+32);
}

}

return new String(Arr);
}

}

class Program1
{

public static void main(String arg[])
{
Scanner sobj=new Scanner(System.in);
Marvellous mobj=new Marvellous();
System.out.println("Enter String");
mobj.Accept();
System.out.println(" String is");
mobj.Display();

String s=mobj.ToLower();

System.out.println("lower"+s);


}

}