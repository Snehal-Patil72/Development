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
void Countsmall()
{
	int icnt=0,scnt=0;
	while(*p!='\0')
	{
		if((*p>='A') && (*p<='Z'))
		{
			icnt++;
 		}
		else if((*p>='a') && (*p<='z'))
		{
			scnt++;
 		}
	p++;		
	}
	cout<<"Cap:"<<icnt<<endl;
	cout<<"Small:"<<scnt<<endl;

}
	
};

int main()
{

	Demo d;
	d.Accept();
	d.Countsmall();
	return 0;
}