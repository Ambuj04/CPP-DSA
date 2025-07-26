#include<iostream>
using namespace std;

void linearSearch(int arr[],int key,int n){
    //Time Complexity O(n)
for (int i = 0; i < n; i++)
{
    if(key == arr[i]){
        cout<<i;
    }
}

return ;
}

 
int main(){
  int arr[] = {1,2,3,4,5,6,7,8,9,10};
 int key = 10;
 int n = sizeof(arr)/sizeof(int);

 //find key in array
 linearSearch(arr,key,n);





return 0;
 }