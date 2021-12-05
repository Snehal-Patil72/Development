#include<iostream>
using namespace std;

class Demo
{
	public:
	
	bool Even(int iNo)
	{
	if((iNo%2)==0)
	{
       return true;		
	}
    else 	
	{
       return false;
	}
		
	}
};


int main()
{
	int iValue=0;
	
	cout<<"Enter Number";
	cin>>iValue;
	
	Demo d;
    bool res=false;
	res=d.Even(iValue);
	if(res==true)
	{
		cout<<"Number is Even";
	}
	else
	{
		cout<<"Number is odd";
	}
	return 0;
}