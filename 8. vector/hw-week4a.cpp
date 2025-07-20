#include<iostream>
#include<vector>
using namespace std;
void sortArray(){
    int n;
    cout<<"enter number of elem :";
    cin>>n;
    cout<<"enter 0 1 and 2 :";
    vector<int>nums(n);
    for (int i = 0; i < n; i++)
    {
        cin>>nums[i];
    }
    int l=0;
    int m=0;
    int h=nums.size()-1;
    while (m<=h)
    {
        if (nums[m]==0)
        {
            swap(nums[l],nums[m]);
            l++,m++;
        }else if(nums[m]==1){
            m++;
        }else{
            swap(nums[m],nums[h]);
            h--;
        }
        
    }

    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i];
    }
    
    

}
void allnegnumleft(){
   
    int arr[] = {1,2,-3,4,-5,6,-1,3,-4,-8,3,4};
    int l=0;
    // int h = 5;
    int h = sizeof(arr)/sizeof(int) - 1;
    while (l<h)
    {
        if(arr[l]>0){
            swap(arr[l],arr[h]);
            h--;
        }else{
            l++;
        }
    }
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

void duplicateinarray(){
    int array[] = {1,2,3,4,5,6,2,3,4,6};
    vector<int>ans;
 int n = sizeof(array)/sizeof(int);

 for (int i = 0; i < n; i++)
 {
    for (int j = 1; j < n-i; j++)
    {
        if(array[i]==array[j]){
            swap(array[i+1],array[j]);
            i++;
        }
    }
    
 }
 
   
 

for (int i = 0; i < n; i++)
{
    if(array[i]==array[i+1]){
ans.push_back(array[i]);
    }
}

for(auto val : ans){
    cout<<val<<" ";
}


}


int main(){

    // sortArray();
    // allnegnumleft();
    // duplicateinarray();
    
    
    
}
