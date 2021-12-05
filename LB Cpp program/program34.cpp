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
	float Average()
	{
		cout<<"inside avg";
		int sum=0;
		for(int i=0;i<size;i++)
		{
			sum=sum+p[i];
     		}
		float ans;
		ans=float(sum)/float(size);
		printf("ans=%f",ans);
		return ans;
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
float res=d.Average();
cout<<"Res:"<<res;	
	
	return 0;
}