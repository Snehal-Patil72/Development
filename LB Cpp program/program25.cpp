#include<iostream>
using namespace std;

class Demo
{
public:
int Power(int iNo,int y)
{
	int pow=1;
	for(int i=1;i<=y;i++)
	{
		pow=pow*i;
	}
	return pow;

}
};
int main()
{
	
	int iValue=0,no=0;
	
	cout<<"Enter value no";
	cin>>iValue;
	
	cout<<"Enter value pow";
	cin>>no;
	
	Demo d;

	int res=d.Power(iValue,no);
	
    cout<<"pow="<<res;
	
	return 0;
}