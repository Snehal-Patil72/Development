#include<iostream>

using namespace std;


void fun(int a)
{
	
try
	{
	if(a>=18)
	{
  cout<<"Access granted";		
	}
	else
	{
		throw 1;
	}
	}
	catch(int a)
	{
				
		throw;
	}
}
		
int main()

{
	int age=0;
	cout<<"Enter your age";
	cin>>age;
	try
	{
		fun(age);
	
	}
	catch(...)
	{
		
		cout<<"Access Denied";
		cout<<endl;
		cout<<"Error";
		cout<<"main";
	}
	return 0;
}