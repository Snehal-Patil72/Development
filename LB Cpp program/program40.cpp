n#include<iostream>
using namespace std;

class Demo
{
	public:
	
	void Display(int iNo)
	{
		char ch='A';
		for(int i=1;i<=iNo;i++,ch++)
		{
			 printf("%c \t",ch);
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
}s