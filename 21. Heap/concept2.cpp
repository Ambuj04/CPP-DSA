//same operation by recursion
#include<iostream>

using namespace std;
void heapify(int arr[],int n,int i){
    
    int index = 1;
    int leftIndex = 2*i;
    int rightIndex = 2*i+1;
    int largest = index;
    if(leftIndex<=n&&arr[largest]<arr[leftIndex]){
        largest = leftIndex;
    }else if(rightIndex <=n && arr[largest]<arr[rightIndex]){
        largest = rightIndex;
    }
    if(index != largest){
        swap(arr[index],arr[largest]);
        index = largest;
        heapify(arr,n,index);
    }
}
void buildHeap(int arr[],int n){
    for(int i = n/2;i>0;i--){
        //why n/2 to 0
        heapify(arr,n,i);
     }

}
int main(){
    int arr[] = {-1,12,15,13,11,14};
//we don't need to heapify the leaf nodes because if we heapify upr wale nodes then leaf node automatic shi ho jayega and leaf node ke pass left and right index bhi nahi hai
buildHeap(arr,6);
for(auto key:arr){
    cout<<key<<" ";
}


  
 
return 0;
 }