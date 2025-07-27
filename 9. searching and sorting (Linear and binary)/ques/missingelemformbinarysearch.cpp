#include<iostream>

using namespace std;
 
int main(){
  int arr[] = {1,2,3,4,6,7,8};
  int s = 0;
  int e = sizeof(arr)/sizeof(int)-1;
  int mid;
  while (s<=e)
  {
    mid = s + (e-s)/2;
    if(arr[mid] != mid+1 && arr[mid -1] == mid){
        cout<<mid+1;
        return 0;
    }else if(arr[mid]==mid+1){
        //right search
        s = mid+1;
    }else{//left search
        e = mid-1;
    }
  }
  
 
return 0;
 }