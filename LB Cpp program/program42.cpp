#include<iostream>

using namespace std;

class Demo
{
	public:
	int *p;
	int size;
	
	Demo(int a)
	{
		size=a;
		p=new int[size];
	}
	void Accept()
	{
		for(int i=0;i<size;i++)
		{
			cin>>p[i];
		}
	}
	void Display()
	{
		for(int i=0;i<size;i++)
		{
          cout<<p[i];
		  cout<<endl;
		}
	}
	 int Count()
	{
		int icnt=0,sum=0;
		for(int i=0;i<size;i++)
		{
			if((p[i]>10) && (p[i]<20))
			{
				icnt++;
				sum=sum+p[i];
			}
		}


		return icnt;
	}
	
};

int main()
{
int iSize=0;
cout<<"enter size of array";
cin>>iSize;

Demo d(iSize);

d.Accept();
d.Display();
int res=d.Count();
cout<<"Count:"<<res;	
	
	return 0;
}