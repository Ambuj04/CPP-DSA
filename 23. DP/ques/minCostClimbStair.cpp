#include <iostream>
#include <vector>
using namespace std;
int solve(vector<int> &cost, int n)
{
    // bc
    if (n == 0)
    {
        return cost[0];
    }
    if (n == 1)
    {
        return cost[1];
    }
    int ans = cost[n] + min(solve(cost, n - 1), solve(cost, n - 2));
    return ans;
}
int solve1(vector<int> &cost, int n, vector<int> &dp)
{
    // bc
    if (n == 0)
    {
        return cost[0];
    }
    if (n == 1)
    {
        return cost[1];
    }

    // step3
    if (dp[n] != -1)
    {
        return dp[n];
    }

    // step2
    dp[n] = cost[n] + min(solve1(cost, n - 1, dp), solve1(cost, n - 2, dp));
    return dp[n];
}
int solve2(vector<int> &cost, int n)
{

    // step1
    vector<int> dp(n + 1);
    // step2 bc analyze
    dp[0] = cost[0];
    dp[1] = cost[1];
    // step3 remaining cases
    for (int i = 2; i < n; i++)
    {
        dp[i] = cost[i] + min(dp[i - 1], dp[i - 2]);
    }
    return min(dp[n - 1], dp[n - 2]);
}
int solve3(vector<int> &cost, int n)
{

   
    int prev2 = cost[0];
    int prev1 = cost[1];
    int curr;
    // step3 remaining cases
    for (int i = 2; i < n; i++)
    {
         curr = cost[i]+min(prev1,prev2);
       prev2 = prev1;
       prev1 = curr;
    }
    return min(prev1,prev2);
}

int minCostClimbingStairs(vector<int> &cost)
{
    // need to optimized
    //  int n = cost.size();
    //  int ans = min(solve(cost,n-1),solve(cost,n-1));
    //  return ans;


    // dp
    //  int n = cost.size();
    //  //step1
    //  vector<int>dp(n+1,-1);
    //  int ans = min(solve1(cost,n-1,dp),solve1(cost,n-2,dp));
    //  return ans;

    
    // int n = cost.size();
    // return solve2(cost, n);
   
    int n = cost.size();
    return solve3(cost, n);
}
int main()
{
    int x;

    vector<int> arr;
    // while (true)
    // {
    //     cin >> x;
    //     if (x == -1)
    //     {
    //         break;
    //     }
    //     else
    //     {
    //         arr.push_back(x);

    //     }
    // }
    arr.push_back(10);
    arr.push_back(15);
    arr.push_back(20);

    cout << minCostClimbingStairs(arr);

    return 0;
}