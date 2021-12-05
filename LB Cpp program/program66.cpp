#include<iostream>

using namespace std;

class Demo
{
public:
char *p;

Demo()
{
	p=new char[50];
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
int Countsmall()
{
	int icnt=0;
	while(*p!='\0')
	{
		if((*p>='a') && (*p<='z'))
		{
			icnt++;
 		}
	p++;		
	}
	return icnt;
}
	
};

int main()
{

	Demo d;
	d.Accept();
	//d.Display();
	int res=d.Countsmall();
	cout<<res;
	return 0;
}