#include<iostream>
using namespace std;

void binarySearch(int arr[],int key,int n){

int start = 0;
int end = n-1;
int mid;
int ans;
while (start <= end)
{

    mid = start + (end - start)/2;
    if (key == arr[mid])
    {
        ans = mid;
      
        end = mid-1;
       
    }else if(key < arr[mid]){
        //left search
        end = mid-1;
    }else if(key>arr[mid]){
        //right search
        start = mid+1;
    }
    
}

cout<<ans;
return ;
}

 
int main(){
  int arr[] = {1,3,4,4,4,4,6,7,9};
 int key = 4;
 int n = sizeof(arr)/sizeof(int);

 binarySearch(arr,key,n);





return 0;
 }