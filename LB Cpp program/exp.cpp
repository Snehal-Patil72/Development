#include<iostream>

using namespace std;

int main()
{
	int age=0;
	cout<<"Enter your age";
	cin>>age;
	try
	{
	if(age>=18)
	{
  cout<<"Access granted";		
	}
	else
	{
		throw age;
	}
	}
	catch(int a)
	{
		
		cout<<"Access Denied";
		cout<<endl;
		cout<<"Error"<<a;
	}
	return 0;
}