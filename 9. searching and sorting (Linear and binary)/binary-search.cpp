#include<iostream>
using namespace std;

void binarySearch(int arr[],int key,int n){
    //Time Complexity O(log base2 n) = O(logn)
//two pointer approach
int start = 0;
int end = n-1;
while (start <= end)
{
    int mid = start + (end - start)/2;
    if (key == arr[mid])
    {
         cout<<mid;
         return;
    }else if(key < arr[mid]){
        //left search
        end = mid-1;
    }else{
        //right search
        start = mid+1;
    }
    
}


return ;
}

 
int main(){
  int arr[] = {1,2,3,4,5,6,7,8,9,10};
 int key = 10;
 int n = sizeof(arr)/sizeof(int);
//for binary search array must be sorted
 //find key in array
 binarySearch(arr,key,n);





return 0;
 }