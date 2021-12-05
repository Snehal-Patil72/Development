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
	cout<<"Enter character"<<endl;
	scanf("%c",p);
	
	
}

char Checkcapital()
{

		if((*p>='A') && (*p<='Z'))
		{
			return *p=*p+32;
 		}
		else if((*p>='a') && (*p<='z'))
		{
			return *p=*p-32;
 		}
	
}

};

int main()
{

	Demo d;
	d.Accept();
	//d.Display();
   char c=d.Checkcapital();
   cout<<c;
	return 0;
}