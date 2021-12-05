using System;

class Test
{
public string Display(string str)
{
	int i=0;
char []Arr=str.ToCharArray();

for(i=0;i<Arr.Length;i++)
{
if((Arr[i]>='A') && (Arr[i]<='Z'))
{
	Arr[i]=Convert.ToChar(Arr[i]+32);
}

}
return new string(Arr);
}


	}


class Demo
{
	static void Main(string []arg)
	{
      string name;

      Console.WriteLine("Enter the string");
      name=Console.ReadLine();

      Test obj=new Test();

      string res=obj.Display(name);

      Console.WriteLine(res);
	}

}