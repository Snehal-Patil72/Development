#include<iostream>

using namespace std;

class  Demo
{
public:

void Display(int iNo)
{
for(int i=1;i<=iNo;i++)
{
if((i%2)==0)
{
printf("#\t");

}
else
{
printf("*\t");	
}	
}
}
};

int main()
{
	
	int iValue=0;
	
	cout<<"Enter Number";
	cin>>iValue;
	
	Demo d;
	
	d.Display(iValue);
	

	return 0;
}