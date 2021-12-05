#include<iostream>

using namespace std;
class Demo
{
	public:
	
	void Display(int n)
	{
		for(int i=1;i<=10;i++)
		{
			cout<<i*n;
			cout<<endl;
		}
	}
	
};

int main()
{
	
	int iValue=0;
	
  cout<<"Enter Value";
  cin>>iValue;
  cout<<endl;
  
  Demo d;
  d.Display(iValue);
  
  return 0;
}