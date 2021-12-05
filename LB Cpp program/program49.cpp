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
	 int Count(int iNo)
	{
		int i,icnt=-1;
		for( i=0;i<size;i++)
		{
			if(p[i]==iNo)
			{
				icnt=i;
				break;
			}
		}
if(i==size)
{
	return -1;
}
else
{
	return icnt;
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
int res=d.Count(no);
if(res==-1)
{
cout<<"no not present";
}
else
{
cout<<"no  present at:"<<res;
}	
	return 0;
}