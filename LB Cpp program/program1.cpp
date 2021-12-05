#include<iostream>

using namespace std;

class Add
{
	public :
	int Addition(int x,int y)
	{
		int c=x+y;
		return c;
	}
	
};

int main()
{
	int a,b;
	cout<<"Enter two Numbers";
	cin>>a>>b;
	Add obj;
	int res=obj.Addition(a,b);
	cout<<"Addition"<<res;
	return 0;
}