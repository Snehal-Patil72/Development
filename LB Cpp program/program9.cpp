#include<iostream>

using namespace std;

typedef unsigned long int UINT;

class Demo
{
	
	public :
	UINT Fact(int n)
	{
			UINT iMul=1;

		if(n==0)
		{
			return iMul ;
		}
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
	UINT res=d.Fact(iValue);
	
	cout<<res;
	
return 0;
}	
	
	
	