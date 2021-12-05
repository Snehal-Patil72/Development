#include<iostream>

using namespace std;

class Demo
{
	
	public :
	int Fact(int n)
	{
		int iMul=1;
		for(int i=1;i<=n;i++)
		{
			iMul=iMul*i;
		}
		return iMul;
	}
};

int main()
{
	int iValue=0;
	cout<<"Enter Number";
	cin>>iValue;
	
	Demo d;
	int res=d.Fact(iValue);
	
	cout<<res;
	
return 0;
}	
	
	
	