#include<iostream>

using namespace std;

class  Demo
{
public:

void Display(int iNo)
{
for(int i=iNo;i>=1;i--)
{
printf("%d ",i);
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