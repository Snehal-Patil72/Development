#include<iostream>
using namespace std;

class Demo
{
	public:
	int Reverse(int iNo)
	{
		int Rev=0,iDigit=0;
       while(iNo!=0)
	   {
		   iDigit=iNo%10;
		   Rev=(Rev*10)+iDigit;
		   iNo=iNo/10;
	   }
	   return Rev;
	}
};

int main()
{
	
	int iValue=0;
	
	cout<<"Enter Number";
	cin>>iValue;
	
	Demo d;

	int res=d.Reverse(iValue);
	
    cout<<"Reverse="<<res;
	
	return 0;
}