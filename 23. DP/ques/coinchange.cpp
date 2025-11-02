// coin infinite supply
// get min num of coin to achieve target

#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int solveRec(vector<int> &num, int x)
{
    // bc
    if (x == 0)
    {
        return 0;
    }
    else if (x < 0)
    {
        return INT_MAX;
    }
    int mini = INT_MAX;
    for (int i = 0; i < num.size(); i++)
    {
        int ans = solveRec(num, x - num[i]);
        if (ans != INT_MAX)
        {
            mini = min(mini, 1 + ans);
        }
    }
    return mini;
}

int solve1(vector<int> &num, int x, vector<int> &dp)
{

    // bc
    if (x == 0)
    {
        return 0;
    }
    else if (x < 0)
    {
        return INT_MAX;
    }

    if (dp[x] != -1)
    {
        return dp[x];
    }

    int mini = INT_MAX;
    for (int i = 0; i < num.size(); i++)
    {
        int ans = solveRec(num, x - num[i]);
        if (ans != INT_MAX)
        {
            mini = min(mini, 1 + ans);
        }
    }
    dp[x] = mini;
    return mini;
}


int solve2(vector<int> &num, int x)
{
 
    vector<int>dp(x+1,INT_MAX);
    dp[0] = 0;
     for(int i = 1;i<=x;i++){
        //try to solve for every amount from 1 to x
        for (int j = 0; j < num.size(); j++)
        {
            if(i-num[j]>=0 && dp[i-num[j]] != INT_MAX){

                dp[i] = min(dp[i],1+dp[i-num[j]]);
            }
        }
        
     }
     if(dp[x]==INT_MAX)
        return -1;
    
    return dp[x];
}



int minimumElements(vector<int> &num, int x)
{
    // int ans = solveRec(num,x);
    // if(ans == INT_MAX){
    //     return -1;
    // }else{
    //     return ans;
    // }

    // dp
    // int n = num.size();
    // vector<int> dp(x + 1, -1);
    // int ans = solve1(num, x, dp);
    // if (ans == INT_MAX)
    // {
    //     return -1;
    // }
    // else
    // {
    //     return ans;
    // }

    //tabulation method
      int ans = solve2(num,x);
      return ans;

    //space optimization
     //not possible 0(n) is also in space optimization 

}
int main()
{
    vector<int> coins{1,2, 3, 4, 5};
    int target = 300;
    cout << minimumElements(coins, target);

    return 0;
}