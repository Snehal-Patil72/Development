#include<iostream>

using namespace std;

class  Demo
{
public:

void Display(int iNo)
{
for(int i=1;i<=iNo;i++)
{
	cout<<"*";
	cout<<endl;
}
}	
};

int main()
{
	
	int iValue=0;
	
	cout<<"Enter Number";
	cin>>iValue;
	
	Demo d;
	
	d.Display(iValue);
	

	return 0;
}