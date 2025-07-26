// Online C++ compiler to run C++ program online

#include <iostream>

#include<algorithm>

#include<vector>

using namespace std;

void solve(vector<int>& arr,int n,int ans[]){

    int expsum = (n*(n+1))/2;

    int actsum = 0;

    //repeating elem

    for(int i=0;i<n-1;i++){

        if(arr[i]==arr[i+1]){

            ans[0] = arr[i];

          break;

        }else{

            ans[0] = -1;

        }

    }

   //missing elem 

  for(int i=0;i<n;i++){

      actsum += arr[i];

     

    

  }

  ans[1]= expsum - (actsum - arr[0]);

return;

   

}

int main() {

    // Write C++ code here

    vector<int>arr{2,2}; //ans [2,1] 2 repeating 1 missing

    int ans[2];

    int n= arr.size();

    sort(arr.begin(),arr.end());

   

   solve(arr,n,ans);

  for(auto key:ans){

      cout<<key<<" ";

  }

  

    return 0;

}