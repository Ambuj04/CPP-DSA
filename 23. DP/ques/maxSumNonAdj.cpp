#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int solve(vector<int>&nums,int n){
    //bc
    if(n<0) return 0;
    if(n==0) return nums[0];

    int incl = solve(nums,n-2)+nums[n];
    int excl = solve(nums,n-1)+0;
    return max(incl,excl);
}
int solve1(vector<int>&nums,int n,vector<int>&dp){
     //bc
    if(n<0) return 0;
    if(n==0) return nums[0];

    if(dp[n]!=-1){
        return dp[n];
    }

    int incl = solve(nums,n-2)+nums[n];
    int excl = solve(nums,n-1)+0;
    dp[n] = max(incl,excl) ;
    return dp[n];
}
int solve2(vector<int>&nums){

    int n = nums.size();
    vector<int>dp(n,0);
    dp[0] = nums[0];
   for (int i = 1; i < n; i++) {
    int incl = nums[i];
    if(i - 2 >= 0) incl += dp[i - 2];
    int excl = dp[i - 1];
    dp[i] = max(incl, excl);
}

    return dp[n-1];
    
}
int solve3(vector<int>&nums){

    int n = nums.size();
    int ans;
    int prev2 = 0;
    int prev1 = nums[0];
   for (int i = 1; i < n; i++) {
    int incl = prev2 + nums[i];
    int excl = prev1 + 0;
      ans = max(incl,excl);
    prev2 = prev1;
    prev1 = ans;
}

    return ans;
    
}



int maxSum(vector<int>&nums){
    // int n = nums.size();
    // int ans = solve(nums,n-1);
    // return ans;

    // int n = nums.size();
    // vector<int>dp(n,-1);
    // int ans = solve1(nums,n-1,dp);
    // return ans;

    // int ans = solve2(nums);
    // return ans;
    
    int ans = solve3(nums);
    return ans;
}
int main(){
  
    vector<int>nums{1,2,3,4,5,6,7,8,9};
    cout<<maxSum(nums);
 
return 0;
 }