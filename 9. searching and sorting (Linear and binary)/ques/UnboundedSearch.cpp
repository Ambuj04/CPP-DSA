//search in Infinite array
#include<iostream>

using namespace std;
int solve(int a[],int n ,int x){
    int i = 0;
    int j = 1;
    if(a[i] == x) return 0;
    while (a[j]<=x && j<=n)
    {
    

        i = j;
        j *= 2; //you can change it 
    }
    int left = i;
    int right = min(j, n - 1);
    

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (a[mid] == x) return mid;
        else if (a[mid] < x) left = mid + 1;
        else right = mid - 1;
    }

    return -1; // not found
    
}
int main(){
 int arr[] = {1,2,3,4,5,6,7,8,9,11,22,33,44,55,66,77,88,99};
 int n = sizeof(arr)/sizeof(int);
 int x = 88;
 cout<<solve(arr,n,x); 
 
return 0;
 }