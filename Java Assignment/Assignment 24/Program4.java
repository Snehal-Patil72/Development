import java.util.*;
import StringX.StringX;


class Marvellous extends StringX
{

public Marvellous()
{
	super();
}

public int Check(char ch)
{
	int result=-1;

char Arr[]=str.toCharArray();
for(int i=0;i<Arr.length;i++)
{
if(Arr[i]==ch)
{
	result=i;
	
}

}
return result;
}

}
class Program4
{
public static void main(String arg[])
{
Scanner sobj=new Scanner(System.in);

Marvellous mobj=new Marvellous();

mobj.Accept();
mobj.Display();

System.out.println("Enter the Character");
char c=sobj.next().charAt(0);

int bRet=0;

bRet=mobj.
Check(c);



System.out.println(bRet);


}

}