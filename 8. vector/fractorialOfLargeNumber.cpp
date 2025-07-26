#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> factorial(int n) {
        vector<int>ans;
        int carry = 0;
        ans.push_back(1);
        for (int i = 2; i <= n; i++)
        {
            for(int j=0;j<ans.size();j++){
                // cout<<1<<" "<<endl;
                int multiply  = ans[j]*i + carry;
                ans[j] = multiply%10;
                 carry = multiply/10;
               
        }
        while(carry){
        ans.push_back(carry%10);
        carry /= 10;
    }
    carry = 0;
    }
    reverse(ans.begin(),ans.end());
        return ans;
    }

    int main(){

int n = 53;
vector<int>ans = factorial(n);
for(auto i:ans){
    cout<<i;
}

    }