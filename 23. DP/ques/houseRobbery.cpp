#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int>&houseNo){
    int n = houseNo.size();
     int ans;
    int prev2 = 0;
    int prev1 = houseNo[0];
   for (int i = 1; i < n; i++) {
    int incl = prev2 + houseNo[i];
    int excl = prev1 + 0;
      ans = max(incl,excl);
    prev2 = prev1;
    prev1 = ans;
}
return ans;
}

int houseRobbery(vector<int>&houseNo){

    int n = houseNo.size();
    if(n==1){
        return houseNo[0];
    }
    vector<int>first,second;
    for (int i = 0; i < n; i++)
    {
        if(i!=n-1){
            first.push_back(houseNo[i]);
        }
        if(i!=0){
            second.push_back(houseNo[i]);
        }
    }
    
return max(solve(first),solve(second));
   

}
    
int main(){
  
    vector<int>houseNo{9,8,7,10};
    cout<<houseRobbery(houseNo);
 
return 0;
 }  