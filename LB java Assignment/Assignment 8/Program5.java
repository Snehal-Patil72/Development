import java.util.*;



class Demo
{
public void Display(int iStart,int iEnd)
{
       int iSum=0;
for(int i=iEnd;i>=iStart;i--)
{
   System.out.println(i);

}
}
}


class Program5
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