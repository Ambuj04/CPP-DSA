#include<iostream>
using namespace std;

int binarySearchL(int arr[],int key,int n){

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


return ans;
}

int binarySearchH(int arr[],int key,int n){

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

        start = mid+1;
       
    }else if(key < arr[mid]){
        //left search
        end = mid-1;
    }else if(key>arr[mid]){
        //right search
        start = mid+1;
    }
    
}


return ans;
}

 
int main(){
  int arr[] = {1,3,4,4,4,4,4,6,7,9};
 int key = 4;
 int n = sizeof(arr)/sizeof(int);

 int first = binarySearchL(arr,key,n);
 int last = binarySearchH(arr,key,n);

cout<<"total occurance "<<last-first+1;



return 0;
 }