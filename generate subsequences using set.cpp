#include<iostream>
#include<set>
using namespace std;
void f(char inp[],char out[],int i,int j,set<string> &s)
{
	if(inp[i]=='\0')
	{
		out[j]='\0';
		s.insert(string(out));
		return;
	}
	out[j]=inp[i];
	f(inp,out,i+1,j+1,s);
	f(inp,out,i+1,j,s);
}
int main()
{
	char inp[]="abc";
	char out[10];
	set <string> s;
	f(inp,out,0,0,s);
	cout<<s.size()<<endl;
	for(auto it=s.begin(),end=s.end();it!=end;it++)
	{
		cout<<*it<<endl;
	}
	return 0;
}
