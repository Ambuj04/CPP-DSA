#include<iostream>
#include<vector>
using namespace std;
int search(int a[],int x,int n){
    if(a[0] == x) return 0;
    int i = 1;
    
    while (i<n && a[i]<=x)
    {
        if(a[i]==x) return i;
        i *= 2;
    }
    // Now do binary search between i/2 and min(i, n-1)
    int left = i / 2;
    int right = min(i, n - 1);

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (a[mid] == x) return mid;
        else if (a[mid] < x) left = mid + 1;
        else right = mid - 1;
    }

    return -1; // not found
    
}
int main(){
 int arr[] = {3,4,5,6,7,8,9,11,13,15,17,19};
 int x = 13;
 int n = sizeof(arr)/sizeof(int);
 cout<<search(arr,x,n); 
 
return 0;
 }