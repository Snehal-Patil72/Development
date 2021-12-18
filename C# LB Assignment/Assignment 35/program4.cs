using System;

class Test
{
public string StringRev(string str1)
{

char []Arr=str1.ToCharArray();

int i=0,j=0;
char temp;
j=Arr.Length-1;
int size=Arr.Length/2;

for(int k=0;k<Arr.Length;k++)
{
if((Arr[k]>='a') && (Arr[k]<='z'))
{
	Arr[k]=(char)(Arr[k]-32);

}
else
{
	Arr[k]=(char)(Arr[k]+32);


}
}
for(i=0;i<size;i++,j--)
{

temp=Arr[i];
Arr[i]=Arr[j];
Arr[j]=temp;

}
return new string(Arr);
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

string res=obj.StringRev(s1);

Console.WriteLine(res);
}

}