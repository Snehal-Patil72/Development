#include<iostream>

using namespace std;

class Demo
{
public :

    int Fact(int iNo)
	{
      int fact=1;
	  for(int i=1;i<=iNo;i++)
	  {
          fact=fact*i;
          
	  }
	  return fact;
	}
};

int main()
{
	int iValue=0;
	
	cout<<"Enter Number";
	cin>>iValue;
	
	Demo d;

	int res=d.Fact(iValue);
	
	cout<<res;
	
	return 0;
}