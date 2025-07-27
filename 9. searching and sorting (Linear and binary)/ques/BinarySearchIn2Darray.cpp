#include<iostream>
#include<vector>
using namespace std;
 
vector<int> search(vector<vector<int>>&arr,
    int target){
        
    int n=arr.size();
    int m=arr[0].size();

    int s = 0;
    int e = n*m - 1;
    int mid;
    int rowindex;
    int colindex;
    vector<int>ans;
    mid = (s+e)/2;

      rowindex = mid/m;
    colindex = mid%m;
    
while (s<=e)
{
    rowindex = mid/m;
    colindex = mid%m;

    if(arr[rowindex][colindex] == target){
        ans.push_back(rowindex);
        ans.push_back(colindex);
        return ans;
    }else if(arr[rowindex][colindex] < target){
        //right search
        s = mid+1;
    }else if(arr[rowindex][colindex] > target){
        //left search
        e = mid-1;
    }
        mid = (s+e)/2;
}
 ans.push_back(-1);
  return ans;
}


int main(){
vector<vector<int>>twoDarray{
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12}
} ;
int target = 12;


vector<int>indexs = search(twoDarray,target);
 
for(auto i:indexs){
    cout<<i<<" ";
}


return 0;
 }