#include<iostream>
using namespace std;

class Demo
{
	public:
int CountEven(int iNo)
{
	
int iDigit=0,icnt=0;	
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if((iDigit%2)==0)
		{
			icnt++;
		}
		iNo=iNo/10;
	
	}
	return icnt;
	
}	
	
};
int main()
{
	
	int iValue=0;
	
	cout<<"Enter Number";
	cin>>iValue;
	
	Demo d;

	int res=d.CountEven(iValue);
	
    cout<<"Count="<<res;
	
	return 0;
}