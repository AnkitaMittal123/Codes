#include<iostream>
#include<cmath>
using namespace std;
void prime(int m)
{
	for(int i=2;i<=m;i++)
	{
		int a=sqrt(i);
		int flag=1;
		for(int j=2;j<=a;j++)
		{
			if(i%j==0)
			{
				flag=0;
				break;
			
			}
		}
		if(flag==1)
		{
			cout<<i<<" is prime"<<endl;
		}	
	}
}
int main()
{
	int m=20;
	prime(20);
	return 0;
}
