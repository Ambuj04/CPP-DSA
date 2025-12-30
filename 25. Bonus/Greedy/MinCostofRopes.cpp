class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        int n = arr.size();
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i = 0;i<n;i++){
            pq.push(arr[i]);
        }
        int cost = 0;
        while(pq.size()>1){
            int first = pq.top();
            pq.pop();
            int second = pq.top();
            pq.pop();
            int mergedLength = first+second;
            cost = cost + mergedLength;
            pq.push(mergedLength);
        }
        return cost;
    }
};