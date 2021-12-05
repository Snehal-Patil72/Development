#include<iostream>
using namespace std;
class Demo
{
	
public :

float Average(int a,int b,int c)
{
	int sum=a+b+c;
	
	float ans=(float)sum/3;

return ans;
}
};
int main()
{
	int s1,s2,s3;
	
	cout<<"Enter marks";
	cin>>s1;
	cout<<endl;
	cin>>s2;
	cout<<endl;
	cin>>s3;
	cout<<endl;
  Demo d;
  float res=d.Average(s1,s2,s3);
  cout<<"res"<<res;
  
	return 0;
}