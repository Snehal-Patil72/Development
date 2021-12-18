using System;

class Test
{
public string StringCat(string str1,string str2,int no)
{

char []Arr=str1.ToCharArray();
char []nArr=new char[60];
char []Arr2=str2.ToCharArray();
int i=0,j=0;

for(i=0;i<Arr.Length;i++)
{
	nArr[i]=Arr[i];
}
nArr[i]=' ';
i++;

for(j=0;j<no;j++,i++)
{
nArr[i]=Arr2[j];

}

return new string(nArr);
}

}

class program1
{
static void Main(string []arg)
{
string s1,s2;

Console.WriteLine("Enter the strin");
s1=Console.ReadLine();

Console.WriteLine("Enter second string");
s2=Console.ReadLine();

Console.WriteLine("Enter number to concat");
int n=Convert.ToInt32(Console.ReadLine());

Test obj=new Test();

string res=obj.StringCat(s1,s2,n);

Console.WriteLine(res);
}

}