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
		int max=p[0], min=p[0],diff=0;
		for(int i=0;i<size;i++)
		{
			if(p[i]>max)
			{
				max=p[i];
			}
		}
          for(int i=0;i<size;i++)
		{
			if(p[i]<min)
			{
				min=p[i];
			}
		}
		 diff=max-min;


		return diff;
	}
	
};

int main()
{
int iSize=0;
cout<<"enter size of array";
cin>>iSize;

Demo d(iSize);

d.Accept();
//d.Display();
int res=d.Count();
cout<<"Difference:"<<res;	
	
	return 0;
}