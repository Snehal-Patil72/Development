#include<iostream>
using namespace std;

class Demo
{
	public:
int CountEven(int iNo)
{
	
int iDigit=0,sum=0;	
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if((iDigit%2)==0)
		{
			sum=sum+iDigit;
		}
		iNo=iNo/10;
	
	}
	return sum;
	
}	
	
};
int main()
{
	
	int iValue=0;
	
	cout<<"Enter Number";
	cin>>iValue;
	
	Demo d;

	int res=d.CountEven(iValue);
	
    cout<<"sum="<<res;
	
	return 0;
}