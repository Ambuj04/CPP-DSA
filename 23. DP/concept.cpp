#include<iostream>
#include<vector>
using namespace std;

int fib(int n,vector<int>dp){
    if(n<=1){
        return n;
    }
    //step 3
    if(dp[n]!=-1){
     return dp[n];   
    }

    //step 2
    dp[n] = fib(n-1,dp)+fib(n-2,dp);
    return dp[n];
}
int fibNo(int n){
    //step 1 create dp array
  vector<int>dp(n+1,-1);//ini. by -1
    
  //step 2 base case
  dp[0] = 0;
  dp[1] = 1;

  //step 3 processing
  for (int i = 2; i <= n; i++)
  {
            dp[i] = dp[i-1] + dp[i-2];
  }
  return dp[n];
  
  
}
int fibNO(int n){
//memory optimization 
    int curr;
    int prev1 = 1;
    int prev2 = 0;

  //step 3 processing
  for (int i = 2; i <= n; i++)
  {
        curr = prev1+prev2;
        prev2 = prev1;
        prev1 = curr;
  }
  if(n<=1){
    return n;
  }else{
    return curr;
  }
  
  
}

int main(){
 int n;
 cin>>n;
 //step 1
  vector<int>dp(n+1,-1);//ini. by -1
  cout<<fib(n,dp); //top down
  cout<<endl;
  cout<<fibNo(n); //better space complexity (bottom up)
  cout<<endl;
  cout<<fibNO(n);//space optimization
 
return 0;
 }