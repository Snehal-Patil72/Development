#include<iostream>

using namespace std;

class Demo
{
	public:
	
	void Factor(int iNo)
	{
		for(int i=1;i<=iNo/2;i++)
		{
			
		if((iNo%i)==0)
		{
           cout<<i;
           cout<<endl;		   
			
		}
		
	}
	}
	
};

int main()
{
	
	int iValue=0;
	
	cout<<"Enter Number";
	cin>>iValue;
	
	Demo d;

	d.Factor(iValue);

	return 0;
}