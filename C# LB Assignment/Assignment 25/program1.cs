using System;


class Test
{
public string strCpyX(string str,int no)
{
char []Arr=str.ToCharArray();
char []Brr=new char[50];
for(int i=0;i<no;i++)
{
Brr[i]=Arr[i];

}
return new string(Brr);
}


}


class program
{
static void Main(string []arg)
{
Console.WriteLine("Enter String");
string name=Console.ReadLine();

Console.WriteLine("enter the number to copy");
int n=Convert.ToInt32(Console.ReadLine());

Test obj=new Test();

string dest=obj.strCpyX(name,n);

Console.WriteLine(dest);
}

}	
