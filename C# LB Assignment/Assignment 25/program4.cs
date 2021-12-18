using System;


class Test
{
public string strCpyX(string str)
{

char []Arr=str.ToCharArray();

char []Brr=new char[50];
for(int i=0,j=0;i<Arr.Length;i++)
{
if((Arr[i]>='a') && (Arr[i]<='z'))
{
Brr[j]=Arr[i];
j++;
}
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


Test obj=new Test();

string dest=obj.strCpyX(name);

Console.WriteLine(dest);
}

}	
