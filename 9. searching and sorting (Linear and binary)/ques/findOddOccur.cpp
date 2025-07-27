#include<iostream>

using namespace std;
 
int main(){
 int arr[] = {1,1,2,2,3,3,4,4,3,600,600,4,4};
 int s = 0;

int n = sizeof(arr)/sizeof(int);
 int e = n - 1;
 int mid;
 int ans = -1;
 
 while (s<=e)
 {    mid = (s+e)/2;


    if(s==e){
        ans = arr[s];
        
        break;
    }




  if(mid%2 == 0){
    if(arr[mid] == arr[mid+1]){
        s = mid+2;
    }else{
        e = mid;

    }
  }else{
    if(arr[mid] == arr[mid-1]){
        s = mid+1;
    }else{
        e  = mid-1; 
    }
  }




 }


 cout<<ans;
 
 
return 0;
}