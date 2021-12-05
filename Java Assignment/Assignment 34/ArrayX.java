package ArrayOperation;
import java.util.*;




public class ArrayX
{
public int Arr[];

public ArrayX(int size)
{
Arr=new int[size];
}

public void Accept()
{
	Scanner sobj=new Scanner(System.in);
int i=0;
for(i=0;i<Arr.length;i++)
{
Arr[i]=sobj.nextInt();

}

}
public void Display()
{
	Scanner sobj=new Scanner(System.in);
int i=0;
for(i=0;i<Arr.length;i++)
{
System.out.println(Arr[i]);
}

}

}

