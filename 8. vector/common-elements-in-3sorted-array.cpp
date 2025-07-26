class Solution {
  public:
    // Function to find common elements in three arrays.
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3) {
        // Code Here
        int n1= arr1.size();
        int n2 = arr2.size();
        int n3 = arr3.size();
        int i,j,k;
        i=j=k=0;
        set<int>ans;
        vector<int>mainans;
    while(i<n1 && j<n2 && k<n3 ){
        if(arr1[i] == arr2[j] && arr2[j] == arr3[k]){
            ans.insert(arr1[i]);
            i++;
            j++;
            k++;
            
        }else if(arr1[i] < arr2[j]){
            i++;
        }else if(arr2[j] < arr3[k]){
            j++;
        }else{
            k++;
        }
            
        
    }
    
    
    if(ans.size() == 0){
        mainans.push_back(-1);
        
    }else{
         for(auto key:ans){
        mainans.push_back(key);
    }
    return mainans;
    }
        
    
    
   
    
    
}
    
};