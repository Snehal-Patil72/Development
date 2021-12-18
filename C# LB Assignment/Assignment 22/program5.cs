using System;


class Test
{
public string Count(string word)
{
int i=0;
bool flag=false;
char []str=word.ToCharArray();
int start=0;
int end=str.Length-1;
char temp;
while(start<end)
{
temp=str[start];
str[start]=str[end];
str[end]=temp;

start++;
end--;	
}
return new string(str);
}	
}

class program1
{
static void Main(string []arg)
{
Console.WriteLine("Enter String");
string name=Console.ReadLine();

Test obj=new Test();

string iRet=obj.Count(name);
Console.WriteLine(iRet);

}
}	