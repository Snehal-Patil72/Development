#include<iostream>
using namespace std;

class Demo
{
	public :
	
	bool PaliNo(int iNo)
	{
		int Rev=0,iDigit=0,temp=0,icnt=0;
		temp=iNo;

		while(iNo!=0)
		{
       iDigit=iNo%10;
        Rev=(Rev*10)+iDigit;
         iNo=iNo/10;
		 
		}
		
		if(temp==Rev)
		{
			return true;
		}
		
		return false;
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