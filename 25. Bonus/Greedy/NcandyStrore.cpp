class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& prices, int k) {
        // Code here
        sort(prices.begin(),prices.end());
        int mini = 0;
        int buy = 0;
        int free = prices.size()-1;
        
        while(buy<=free){
            mini = mini+prices[buy];
            buy++;
            free = free-k;
        }
        int maxi = 0;
        buy = prices.size()-1;
        free = 0;
          while(free <= buy){
            maxi = maxi+prices[buy];
            buy--;
            free = free+k;
        }
        vector<int>ans;
        ans.push_back(mini);
        ans.push_back(maxi);
        return ans;
    }
};

//We use sort(arr, arr+N) when arr is a C-style array because pointers act as iterators, whereas begin() and end() are available only for STL containers.