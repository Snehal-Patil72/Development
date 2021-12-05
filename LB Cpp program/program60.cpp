#include<iostream>

using namespace std;

class Demo
{
public:
char *p;

Demo()
{
	p=new char[5];
}
void Accept()
{
	cout<<"Enter String"<<endl;
	scanf("%[^'\n]s",p);
	
	
}
void Display()
{
	while(*p!='\0')
	{
		cout<<*p;
		p++;
	}
	cout<<endl;
}	
bool Checkcapital()
{
	while(*p!='\0')
	{
		if((*p>='A') && (*p<='Z'))
		{
			return true;
 		}
	p++;		
	}
	return false;
}
	
};

int main()
{

	Demo d;
	d.Accept();
	//d.Display();
	bool res=d.Checkcapital();
	if(res==true)
	{
		cout<<"Capital";
	}
	else
	{
	cout<<"not Capital";
	}
	return 0;
}