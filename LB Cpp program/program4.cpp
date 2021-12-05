#include<iostream>
using namespace std;

class Demo
{
	public :
	
	void Display(int a)
	{
		for(int i=1;i<=a;i++)
		{
			cout<<"#"<<endl;
		}
	}
		
		
	};
	


int main()
{
	int iValue=0;
	
	cout<<"Enter Number"<<endl;
	cin>>iValue;
	Demo d;
	d.Display(iValue);
	
	return 0;
}