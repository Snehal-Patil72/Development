using System;

class Test
{
public int Search(string str,char c)
{
char []Arr=str.ToCharArray();
int i=0;
int icnt=0;
for(i=0;i<Arr.Length;i++)
{
if(Arr[i]==c)
{
	icnt++;
}
}
return icnt;

}	


}

class program
{
static void Main(string []arg)
{
Console.WriteLine("Enter String");
string name=Console.ReadLine();

Console.WriteLine("Enter the Charater");
char ch=Convert.ToChar(Console.ReadLine());

Test obj=new Test();

int res=obj.Search(name,ch);


	Console.WriteLine(res);

}	
}	