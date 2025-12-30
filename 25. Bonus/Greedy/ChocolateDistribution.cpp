class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        // code here
        sort(a.begin(),a.end());
        int start = 0;
        int end = m-1;
        int mini = INT_MAX;
        while(end<a.size()){
            int diff = a[end]-a[start];
            mini = min(mini,diff);
            start++;
            end++;
        }
        return mini;
    }
};