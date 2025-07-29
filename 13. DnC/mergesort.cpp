#include<iostream>
using namespace std;

void merge(int *arr, int s, int e){
    int mid = s + (e - s) / 2;
    int n1 = mid - s + 1; //size of left part
    int n2 = e - mid; //size of right part
    int *left = new int[n1];
    int *right = new int[n2];
    
    //copying elements to left and right arrays
    for(int i = 0; i < n1; i++){
        left[i] = arr[s + i];
    }
    for(int j = 0; j < n2; j++){
        right[j] = arr[mid + 1 + j];
    }
    
    //merging the two parts
    int leftindex = 0, rightindex = 0, mainarrayindex = s;
    while(leftindex < n1 && rightindex < n2){
        if(left[leftindex] < right[rightindex]){
            arr[mainarrayindex] = left[leftindex];
            mainarrayindex++;
            leftindex++;
        } else {
            arr[mainarrayindex] = right[rightindex];
            mainarrayindex++;
            rightindex++;
        }
    }
    
    //copy remaining elements of left array if any
    while(leftindex < n1){
        arr[mainarrayindex++] = left[leftindex++];
    }
    
    //copy remaining elements of right array if any
    while(rightindex < n2){
        arr[mainarrayindex++] = right[rightindex++];
    }
    
    delete[] left;
    delete[] right;
}



void mergesort(int *arr,int s,int e){
    //base case
    if(s=e){
        return;
    }
    int mid = s + (e - s) / 2;
    //recursive case    
    //left part
    mergesort(arr, s, mid);
    //right part    
    mergesort(arr, mid + 1, e);
    //merge 
    merge(arr,s,e);
}
 
int main(){
  int arr[] = {12, 11, 13, 5, 6, 7};
  int arr_size = sizeof(arr)/sizeof(arr[0]);
  int s = 0;
  int e = arr_size - 1;
  mergesort(arr, s, e);
  for(auto i : arr){
    cout << i << " ";
  }
 
return 0;
 }