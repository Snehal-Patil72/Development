using System;

class Test
{
public string Reverse(string str)
{
char []Arr=str.ToCharArray();
int i=0;
int j=Arr.Length-1;
char temp;
for(i=0;i<Arr.Length/2;i++,j--)
{
temp=Arr[i];
Arr[i]=Arr[j];
Arr[j]=temp;
}
return new string(Arr);

}	


}

class program
{
static void Main(string []arg)
{
Console.WriteLine("Enter String");
string name=Console.ReadLine();



Test obj=new Test();

string res=obj.Reverse(name);


	Console.WriteLine(res);

}	
}	