#include<iostream>
using namespace std;
void f(int n,char out[],int i)
{
	if(i==n)
	{
		out[i]='\0';
		cout<<out<<endl;
		return;
	}
	if(out[i-1]!='H')
		{
			out[i]='H';
			f(n,out,i+1);
		}
	out[i]='T';
	f(n,out,i+1);
}
int main()
{
	int n=3;
	char out[n];
	f(n,out,0);
	return 0;
}
