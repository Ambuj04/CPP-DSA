class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>dq;
        vector<int>ans;
        //traverse first window
        for(int i = 0;i<k;i++){
            //chote elem remove kardo
            while(!dq.empty() && nums[i]>=nums[dq.back()]){
                dq.pop_back();
            }
            //insert index , so that we can check out of window elem
            dq.push_back(i);
        }
        //store answer for first window
        ans.push_back(nums[dq.front()]);
        //remainint window ko process
        for(int i = k;i<nums.size();i++){
            //out of window elem remove
            if(!dq.empty() && i-dq.front() >= k){
                dq.pop_front();
            }
            // ab fir se curr elem k liye chote elem ko remove
             while(!dq.empty() && nums[i]>=nums[dq.back()]){
                dq.pop_back();
            }
            //insert index , so that we can check out of window elem
            dq.push_back(i);
            //current window ka ans store kro
            ans.push_back(nums[dq.front()]);
             
        }
        return ans;
            
         
        
    }
}; 