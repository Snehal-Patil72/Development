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

public String Toggle()
{
char Arr[]=str.toCharArray();

for(int i=0;i<Arr.length;i++)
{
if((Arr[i]>='a')  && (Arr[i]<='z'))
{

	Arr[i]=(char)(Arr[i]-32);
}

else if((Arr[i]>='A')  && (Arr[i]<='Z'))
{

	Arr[i]=(char)(Arr[i]+32);
}

}

return new String(Arr);
}

}

class Program3
{

public static void main(String arg[])
{
Scanner sobj=new Scanner(System.in);
Marvellous mobj=new Marvellous();
System.out.println("Enter String");
mobj.Accept();
System.out.println(" String is");
mobj.Display();

String s=mobj.Toggle();

System.out.println("Toggle: "+s);


}

}