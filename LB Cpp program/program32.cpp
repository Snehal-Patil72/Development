#include<iostream>

using namespace std;

class Demo
{
public:

int Addition(int *Brr,int Length)
{
int sum=0;	
for(int i=0;i<Length;i++)
{
sum=sum+Brr[i];
}
return sum;
}	
	
};

int main()
{
int iSize=0;

cout<<"enter size of array";
cin>>iSize;

int *p=new int[iSize];
for(int i=0;i<iSize;i++)
{
	cin>>p[i];
	cout<<endl;
}

Demo d;

int res=d.Addition(p,iSize);
cout<<res;	
	
	return 0;
}