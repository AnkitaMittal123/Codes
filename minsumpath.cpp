#include<iostream>
#include<vector>
using namespace std;
int minsumpath(vector<vector<int>> grid,int m,int n,int i,int j,vector<vector<int>>& dp){
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(i==m-1 && j==n-1){
        return dp[i][j]=grid[i][j];
    }
    if(i==m-1){
        return dp[i][j]=grid[i][j]+minsumpath(grid,m,n,i,j+1,dp);
    }
    if(j==n-1){
        return dp[i][j]=grid[i][j]+minsumpath(grid,m,n,i+1,j,dp);
    }
    int x=minsumpath(grid,m,n,i,j+1,dp);
    int y=minsumpath(grid,m,n,i+1,j,dp);
    return dp[i][j]=grid[i][j]+min(x,y);
}

int main(){
    vector<vector<int>> grid={
    {1,3,1},
    {1,5,1},
    {4,2,1},
    };
    int m=grid.size();
    int n=grid[0].size();
    vector<vector<int>> dp(m,vector<int> (n,-1));
    cout<<minsumpath(grid,m,n,0,0,dp);
    return 0;
}
