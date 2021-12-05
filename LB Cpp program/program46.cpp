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
	 bool Count(int iNo)
	{
		int i;
		for( i=0;i<size;i++)
		{
			if(p[i]==iNo)
			{
				break;
			}
		}
if(i==size)
{
	return false;
}
else
{
	return true;
}
	}
	
};

int main()
{
int iSize=0;
cout<<"enter size of array";
cin>>iSize;

cout<<"Enter element to search";
int no;
cin>>no;

Demo d(iSize);

d.Accept();
//d.Display();
bool res=d.Count(no);
if(res==true)
{
cout<<"no present";
}
else
{
cout<<"no not present";
}	
	return 0;
}