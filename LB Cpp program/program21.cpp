#include<iostream>
using namespace std;

class Demo
{
	public :
	bool Check(int iNo)
	{
		
		int out=Sumfact(iNo);
		
		if(iNo==out)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	private :
	
	int Sumfact(int value)
	{
		int sum=0;
		for(int i=1;i<=value/2;i++)
		{
	      	if((value%i)==0)
			{
				sum=sum+i;
			}
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

	bool icheck=d.Check(iValue);
	
if(icheck==true)
{
cout<<"Number is perfect no";
}
else
{	
cout<<"Number is not perfect number";
}

	return 0;
}