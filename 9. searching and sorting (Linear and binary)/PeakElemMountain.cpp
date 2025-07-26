#include<iostream>

using namespace std;
 
int main(){
    int ans;
// int arr[] = {1,2,3,10,9,8,7,5,4,3,1};
int arr[] ={0,10,5,2};
int s = 0;
int e = sizeof(arr)/sizeof(int)-1;
int mid;
while(s<e){

    mid = (s+e)/2;
    if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
        ans = arr[mid];
       cout<<ans;
        return 0;
    }else if(arr[mid]<arr[mid+1]){
    //right find
    s = mid;
}else{
    //left search
    e = mid;
}
}  

return 0;
 }