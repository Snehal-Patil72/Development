import java.util.*;



class Demo
{
public void Display(int iStart,int iEnd)
{
for(int i=iStart;i<=iEnd;i++)
{
    if((i%2)==0)
    {
    System.out.println(i);
    }
}
}
}

class Program2
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        int src=0,des=0;
        System.out.println("Enter the starting pt");
        src=sobj.nextInt();

        System.out.println("Enter the starting pt");
       des=sobj.nextInt();

       Demo dobj=new Demo();

       dobj.Display(src,des);
          



    }
}