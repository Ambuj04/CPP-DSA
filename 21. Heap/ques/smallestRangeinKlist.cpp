class node{
    public:
    int data;
    int row;
    int col;
    node(int d,int r,int c){
   data = d;
   row = r;
   col = c;
    }
};
class compare{
public :
bool operator()(node*a,node* b){
    return a->data>b->data;
}
};
class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
    int k = nums.size();
     int mini = INT_MAX;   
     int maxi = INT_MIN;
     priority_queue<node*,vector<node*>,compare>minHeap;
     for(int i = 0;i<k;i++){
        int element = nums[i][0];
        mini = min(mini,element);
        maxi = max(maxi,element);
        minHeap.push(new node(element,i,0));
     }
     int start = mini,end = maxi;
     while(!minHeap.empty()){
            node* temp = minHeap.top();
            minHeap.pop();
            mini = temp->data;
            if(maxi-mini < end-start){
                start = mini;
                end = maxi;
            }
                int nextCol = temp->col + 1;
            if (nextCol < nums[temp->row].size()) {
                int nextVal = nums[temp->row][nextCol];
                maxi = max(maxi, nextVal);
                minHeap.push(new node(nextVal, temp->row, nextCol));
            }else{
                break;
            }
     }
     vector<int>ans;
     ans.push_back(start);
     ans.push_back(end);
     return ans;
    }
};