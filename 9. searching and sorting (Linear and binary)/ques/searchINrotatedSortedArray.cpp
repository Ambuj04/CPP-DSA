#include<iostream>
#include<vector>
using namespace std;
int search(vector<int>& nums, int target) {
        int left = 0;
        int right= nums.size() -1;
        int mid ;
        while(left<=right){
            mid = left + (right - left) / 2;
          
            if(target == nums[mid]){
            return mid;
        }
        if(nums[left] <= nums[mid]){
            //we are in left sorted array
            if(nums[left]<=target&&target<=nums[mid]){
                //answer lies in left sorted array
                right = mid-1;
            }else{
                left = mid+1;
            }
        }else{
            //we are in right sorted array
            if(target>=nums[mid]&&nums[right]>= target ){
                //answer lies in right sorted array
                left= mid+1;
            }else{
                right = mid-1;
            }
        }
    
           
        }
        
            return -1;
        
        
    }
int main(){
  vector<int>nums {1,3};
  int  target = 3;
  cout<<search(nums,target);
 
return 0;
 }