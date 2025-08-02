#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> nextSmaller(vector<int>&v){
   //right to left
stack<int>s;
 s.push(-1);
 vector<int>ans(v.size());
 for(int i = v.size()-1;i>=0;i--){
    int curr = v[i];
    while(s.top()>= curr){
        s.pop();
    }
    ans[i] = s.top();
    s.push(curr);
 }
 return ans;
}

void print(vector<int>&ans){
 
 for(auto i:ans){
    cout<<i<<" "; 

 }
}

vector<int>  prevSmaller(vector<int>&v){
    //left to right
    stack<int>s;
    s.push(-1);
    vector<int>ans(v.size());
    for(int i=0;i<v.size();i++){
      int curr = v[i];
    while(s.top()>= curr){
        s.pop();
    }
    ans[i] = s.top();
    s.push(curr);
    }

return ans;
}

int main(){
 vector<int>v;
 v.push_back(2);
 v.push_back(3);
 v.push_back(5);
 v.push_back(1); 
 v.push_back(4); 
// vector<int> ans = nextSmaller(v);
vector<int> ans1 = prevSmaller(v);
print(ans1);
return 0;
 }