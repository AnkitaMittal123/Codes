#include<iostream>
#include<vector>
using namespace std;
int c1=0,c2=0,c3=0,c4=0;
int fibo(int n)
{
    c1++;
    if(n==0||n==1){
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}
int topdown(int n,vector<int> &dp)
{
    c2++;
    if(dp[n]!=-1){
        return dp[n];
    }
    if(n==0||n==1){
        return dp[n]=n;
    }
    return dp[n]=topdown(n-1,dp)+topdown(n-2,dp);
}
int bottomup(int n,vector<int>& dp)
{
    for(int i=0;i<=n;i++)
    {
        if(i==0||i==1)
        {
            dp[i]=i;
        }
        else{
            dp[i]=dp[i-1]+dp[i-2];
        }
    }
    return dp[n];
}
int bottomup2(int n,vector<int>& dp)
{
    int a,b,c;
    a=0;
    b=1;
    for(int i=2;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
int main(){
    int n=7;
    vector<int> dp(n+1,-1);
    cout<<fibo(n)<<endl;
    cout<<topdown(n,dp)<<endl;
    cout<<bottomup(n,dp)<<endl;
    cout<<bottomup2(n,dp)<<endl;
    cout<<c1<<" "<<c2;
    return 0;
}
