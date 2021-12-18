using System;


class Test
{
public int Count(string word)
{
int i=0,icnt=0,icntC=0;
char []str=word.ToCharArray();
while(i<str.Length)
{
if((str[i]>='a') && (str[i]<='z'))
{
icnt++;
}	
else
{
icntC++;
}
i++;
}
return icnt-icntC;
}	
}

class program1
{
static void Main(string []arg)
{
Console.WriteLine("Enter String");
string name=Console.ReadLine();

Test obj=new Test();

int iRet=obj.Count(name);

Console.WriteLine(iRet);
}
}	