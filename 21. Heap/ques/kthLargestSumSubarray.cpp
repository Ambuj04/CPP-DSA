// User function Template for C++
class Solution {
  public:
    int kthLargest(vector<int> &arr, int k) {
        // code here
        vector<int>sumStore;
        for(int i = 0; i<arr.size();i++){
            int sum=0;
            for(int j = i;j<arr.size();j++){
                sum +=arr[j];
                sumStore.push_back(sum);
            }
        }
        sort(sumStore.begin(),sumStore.end());
        return sumStore[sumStore.size()-k];
    }
};
////////optimized///////////
// User function Template for C++
class Solution {
  public:
    int kthLargest(vector<int> &arr, int k) {
     priority_queue<int,vector<int>,greater<int>>mini;
     for(int i = 0;i<arr.size();i++){
         int sum = 0;
         for(int j = i;j<arr.size();j++){
             sum += arr[j];
             if(mini.size()<k){
                 mini.push(sum);
             }else{
                 if(sum > mini.top()){
                     mini.pop();
                     mini.push(sum);
                 }
             }
         }
     }
      return mini.top();  
    }
};