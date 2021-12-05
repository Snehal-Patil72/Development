#include<iostream>
using namespace std;
class Demo
{
public:
int Sum(int N)
{
	int iDigit=0,isum=0;
	while(N!=0)
	{
		iDigit=N%10;
		isum=isum+iDigit;
		N=N/10;
	}
	return isum;
}
};

int main()
{
	int iValue=0;
	cout<<"Enter Number";
	cin>>iValue;
	cout<<endl;
	
	Demo d;
	int res=d.Sum(iValue);
	cout<<res;
	
	return 0;
}