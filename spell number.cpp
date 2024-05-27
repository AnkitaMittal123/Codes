#include<iostream>
using namespace std;
string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void spell(int n)
{
	if(n==0)
	{
		return;
	}
	spell(n/10);
	int d=n%10;
	cout<<arr[d]<<" ";
}
int main()
{
	int n;
	cout<<"Num:";
	cin>>n;
	spell(n);
	return 0;
}
