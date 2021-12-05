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

public void Digit()
{
char Arr[]=str.toCharArray();

for(int i=0;i<Arr.length;i++)
{
if((Arr[i]>='1')  && (Arr[i]<='9'))
{
System.out.println(Arr[i]);
}


}

}

}

class Program4
{

public static void main(String arg[])
{
Scanner sobj=new Scanner(System.in);
Marvellous mobj=new Marvellous();
System.out.println("Enter String");
mobj.Accept();
System.out.println(" String is");
mobj.Display();
mobj.Digit();



}

}