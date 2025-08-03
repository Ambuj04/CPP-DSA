//Lc 84....
#include<iostream>
#include<vector>
#include<limits.h>
#include<stack>
using namespace std;

vector<int> nextSmallerIndex(vector<int>&v){
   //right to left
stack<int>s;
 s.push(-1);

 vector<int>ans(v.size());
 for(int i = v.size()-1;i>=0;i--){
    int curr = v[i];
    while(s.top() != -1 && v[s.top()]>= curr){
        s.pop();
    }
    ans[i] = s.top();
    s.push(i);
 }
 return ans;
}


vector<int>  prevSmallerIndex(vector<int>&v){
    //left to right
    stack<int>s;
    s.push(-1);
    vector<int>ans(v.size());
    for(int i=0;i<v.size();i++){
      int curr = v[i];
    while(s.top() != -1 && v[s.top()]>= curr){
        s.pop();
    }
    ans[i] = s.top();
    s.push(i);
    }

return ans;
}



class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        vector<int>prev= prevSmallerIndex(heights);
        vector<int>next= nextSmallerIndex(heights);
    
    int maxArea = INT_MIN;
    int size = heights.size();
    for (int i = 0; i < heights.size(); i++)
    {
        int length =heights[i];
        if(next[i] == -1){
            next[i] = size;
        }
        int width = next[i] - prev[i] -1;
        int area = length*width;
        maxArea = max(maxArea,area);
    }
    return maxArea;
    }
};

int main(){
  
 
vector<int>v{2,1,5,6,2,3};


    Solution myanswer;
    int output = myanswer.largestRectangleArea(v);
    cout<<output;
return 0;
 }


