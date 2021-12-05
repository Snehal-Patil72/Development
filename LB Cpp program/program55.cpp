#include<iostream>
using namespace std;

class Demo
{
	public:
	
	void Display(int iNo1,int iNo2)
	{
		for(int i=1;i<=iNo1;i++)
		{
				for(int j=1;j<=iNo2;j++)
				{
					if(i==j)
					{
						printf("$ \t");
					}
					else if(i>j)
					{
		              printf("* \t");

     				}
					else
					{
			          printf("# \t");
					}

		         }
			cout<<endl;

	}
	}	
};

int main()
{
	
	int iValue1=0,iValue2=0;
	
	cout<<"Enter row";
	cin>>iValue1;
	
	cout<<"Enter colonm";
	cin>>iValue2;
	
	Demo d;
	
	d.Display(iValue1,iValue2);
	

	return 0;
}