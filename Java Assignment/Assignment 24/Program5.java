import java.util.*;
import StringX.StringX;


class Marvellous extends StringX
{

public Marvellous()
{
	super();
}

public void Dis()
{

char Arr[]=str.toCharArray();
char temp;
int j=Arr.length-1;
for(int i=0;i<(Arr.length/2);i++,j--)
{
temp=Arr[i];
Arr[i]=Arr[j];
Arr[j]=temp;
}

String str1=new String(Arr);

System.out.println(str1);
}

}
class Program5
{
public static void main(String arg[])
{
Scanner sobj=new Scanner(System.in);

Marvellous mobj=new Marvellous();

mobj.Accept();
mobj.Display();

mobj.Dis();





}

}