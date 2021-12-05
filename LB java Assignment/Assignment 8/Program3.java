import java.util.*;



class Demo
{
public void Display(int iStart,int iEnd)
{
       int iSum=0;
for(int i=iStart;i<=iEnd;i++)
{
 iSum=iSum+i;

}
System.out.println(iSum);
}
}

class Program3
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