#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int robber(int n,vector<int> &nums,int i){
    if(i==n||i==n+1){
        return 0;
    }
    return max(nums[i]+robber(n,nums,i+2),robber(n,nums,i+1));
}

int main(){
    vector<int> nums={100,50,400,200,100};
    int n=nums.size();
    int i=0;
    cout<<robber(n,nums,i);
    return 0;
}
