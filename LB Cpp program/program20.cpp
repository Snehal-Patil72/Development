#include<iostream>
using namespace std;

class Demo
{
	public :
	
	
	
	bool PaliNo(int iNo)
	{
        int out=Reverse(iNo);
		
		if(iNo==out)
		{
			return true;
		}
		else
		{
		return false;
		}
	}
	private:
	
	int Reverse(int value)
	{
		int Rev=0,iDigit=0,temp=0;

		while(value!=0)
		{
       iDigit=value%10;
        Rev=(Rev*10)+iDigit;
         value=value/10;
		 
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

	bool check=d.PaliNo(iValue);
	
if(check==true)
{
cout<<"Number is palidrom";
}
else
{	
cout<<"Number is not palidrom";
}

	return 0;
}