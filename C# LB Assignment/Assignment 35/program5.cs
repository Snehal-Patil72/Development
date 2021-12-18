using System;

class Test
{
public bool StringRev(string str1)
{

char []Arr=str1.ToCharArray();

int i=0,j=0;
char temp;
char []rev=new char[50];

for(int k=0;k<Arr.Length;k++)
{
if((Arr[k]>='a') && (Arr[k]<='z'))
{
	Arr[k]=(char)(Arr[k]-32);

}

}
for(i=Arr.Length-1;i>=0;i--,j++)
{
rev[j]=Arr[i];
}
bool flag=true;
for(int k=0;k<Arr.Length;k++)
{

if(Arr[k]!=rev[k])
{
	flag=false;
}

}
return flag;
}
}
class program1
{
static void Main(string []arg)
{
string s1,s2;

Console.WriteLine("Enter the strin");
s1=Console.ReadLine();

Test obj=new Test();

bool res=obj.StringRev(s1);

if(res==true)
{
Console.WriteLine("TRUE");
}
else
{
	Console.WriteLine("FALSE");
}
}

}