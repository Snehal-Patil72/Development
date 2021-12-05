#include<iostream>
using namespace std;

class Demo
{
	public:
	int Sum(int iNo)
	{
		int iDigit=0,sum=0;
		while(iNo!=0)
		{
		iDigit=iNo%10;
         sum=sum+iDigit;
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
     int res=0;
	res=d.Sum(iValue);
	cout<<"Sum="<<res;
	return 0;

	
	
	return 0;
}