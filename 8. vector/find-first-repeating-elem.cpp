
class Solution {
  public:
    int firstRepeated(vector<int> &arr) {
        // code here
      int n = arr.size();
      unordered_map<int,int>map; //by deault keys's value is zero
      for(int i=0;i<n;i++){
          map[arr[i]]++;
          
      }
      for(int i=0;i<n;i++){
          if(map[arr[i]] > 1){
              return i+1;
          }
              

         
      }
      
                return -1;
    }
};