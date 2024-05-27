#include<iostream>
using namespace std;
int main()
{
	int mat[][4]={
	{11,12,13,14},
	{22,23,24,15},
	{21,26,25,16},
	{20,19,18,17}
	};
	int m=4,n=4;
	int sr=0,sc=0,er=m-1,ec=n-1;
	while(sc<=ec && sr<=er)
	{
		for(int i=sc;i<=ec;i++)
		{
			cout<<mat[sr][i]<<" ";
		}
		sr++;
		for(int i=sr;i<=er;i++)
		{
			cout<<mat[i][ec]<<" ";
		}
		ec--;
		for(int i=ec;i>=sc;i--)
		{
			cout<<mat[er][i]<<" ";
		}
		er--;
		for(int i=er;i>=sr;i--)
		{
			cout<<mat[i][sc]<<" ";
		}
		sc++;
	}
	return 0;
}
