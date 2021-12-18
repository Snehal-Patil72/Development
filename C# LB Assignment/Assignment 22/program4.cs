using System;


class Test
{
public bool Count(string word)
{
int i=0;
bool flag=false;
char []str=word.ToCharArray();
while(i<str.Length)
{
if((str[i]=='a') || (str[i]=='e') ||  (str[i]=='i') ||  (str[i]=='o') ||  (str[i]=='u'))
{
flag=true;
}
i++;	
}
return flag;
}	
}

class program1
{
static void Main(string []arg)
{
Console.WriteLine("Enter String");
string name=Console.ReadLine();

Test obj=new Test();

bool iRet=obj.Count(name);

if(iRet==true)
{
Console.WriteLine("TRUE");
}
else
{
Console.WriteLine("FALSE");

}
}
}	