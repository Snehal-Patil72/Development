#include<iostream>
using namespace std;

class Demo
{
public:

int Count(int iNo)
{
	int iDigit=0,icnt=0;
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit>5)
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
	
	int res=d.Count(iValue);
	cout<<res;
	

	return 0;
}