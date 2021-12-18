using System;


class Test
{
public string strCpyX(string str,string str2)
{

char []Arr=new char[50];
Arr=str.ToCharArray();
char []Crr=str2.ToCharArray();
char []Brr=new char[50];
int i=0,j=0;
for(j=0;j<Arr.Length;i++,j++)
{
Brr[i]=Arr[j];

}
i++;
for(int k=0;k<Crr.Length;k++,i++)
{
Brr[i]=Crr[k];

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

Console.WriteLine("Enter String");
string name2=Console.ReadLine();

Test obj=new Test();

string dest=obj.strCpyX(name,name2);

Console.WriteLine(dest);
}

}	
