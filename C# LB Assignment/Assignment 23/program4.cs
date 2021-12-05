using System;

class Test
{
public void Display(string str)
{
	int i=0;
char []Arr=str.ToCharArray();

for(i=0;i<Arr.Length;i++)
{
if((Arr[i]>='0') && (Arr[i]<='9'))
{
	Console.WriteLine(Arr[i]);
}

}
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

      obj.Display(name);

	}

}