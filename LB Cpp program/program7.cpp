#include<iostream>

using namespace std;

class Demo
{
	public :
	
	int Sum(int iNo)
	{
		int isum=0;

       if(iNo==0)
	   {
		   return isum;
	   }
		for(int i=1;i<=iNo;i++)
		{
			isum=isum+i;
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