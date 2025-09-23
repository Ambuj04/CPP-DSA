#include<iostream>
#include<queue>
using namespace std;
int getKSmallest(int arr[],int n,int k){
    //create max heap
    priority_queue<int>pq;
    //insert initial k 
    for(int i = 0;i<k;i++){
        pq.push(arr[i]);
    }
    //for remaining element (push only when less than top)
    for(int i = k;i<n;i++){
        int element = arr[i];
        if(element <pq.top()){
            pq.pop();
            pq.push(element);
        }
       
    }
     int ans = pq.top();
        return ans;
}
int getKGreatest(int arr[],int n,int k){
    //create min heap
    priority_queue<int,vector<int>,greater<int>>pq;
    //insert initial k 
    for(int i = 0;i<k;i++){
        pq.push(arr[i]);
    }
    //for remaining element (push only when greater than top)
    for(int i = k;i<n;i++){
        int element = arr[i];
        if(element > pq.top()){
            pq.pop();
            pq.push(element);
        }
       
    }
     int ans = pq.top();
        return ans;
}
int main(){
 int arr[] = {10,5,20,4,15};
 int n = 5;
 int k = 1;
 int ans = getKSmallest(arr,n,k); 
 cout<<ans<<endl;//4
 int ans1 = getKGreatest(arr,n,k);
 cout<<ans1<<endl;//20
 
return 0;
 }