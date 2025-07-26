#include<iostream>

using namespace std;
 
int main(){
 int arr[] = {10,3,40,20,50,80,70};
 int target = 270;
 int s = 0;
 int e = sizeof(arr)/sizeof(int)-1;
int mid;
int ans = -1;
while (s<=e)
{mid = (s+e)/2;
    if(arr[mid] == target){
ans = mid;

}else if(arr[mid-1]==target && mid-1 >= s){
    ans = mid-1;
   
}else if(arr[mid+1]==target && mid+1 <= e){
    ans = mid+1;
   
    }

    if(target > arr[mid]){
        s = mid +2;
    }else{
        e= mid-2;
    }



}

if(ans){
    cout<<ans;
    }else{
    cout<<-1;
}


 
return 0;
 }