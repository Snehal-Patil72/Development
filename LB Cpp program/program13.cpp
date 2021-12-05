#include<iostream>

using namespace std;

class Demo
{
public:
  int iNo;
  
  Demo(int a)
  {
	  iNo=a;
  }
  
  void Display()
  {
	  int iDigit;
	  while(iNo>0)
	  {
		  iDigit=iNo%10;
		  cout<<iDigit;
		  iNo=iNo/10;
	  }
	  
  }
  
	
};

int main()
{
	int iValue=0;
	
	cout<<"Enter Number";
	cin>>iValue;
	
	Demo d(iValue);

	d.Display();
	return 0;
}