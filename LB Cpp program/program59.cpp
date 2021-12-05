#include<iostream>

using namespace std;

class Demo
{
public:


void Display()
{
	int i=0;
	for(i=0;i<255;i++)
	{
		printf("%d \t %c \t",i,i);
		printf("\n");
	}
}	

	
};

int main()
{

	Demo d;
	//d.Accept();
	d.Display();
	//int res=d.strlenx();
	//cout<<res;
	return 0;
}