#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
 
int main(){
 //vector is a data structure
 //vector is a dynamic array
 //unfixed size of array
 //initially vector is capable of taking 2 input but when the 2 input is full then if we want to insert a 3rd element then the vector doubles the itself present capacity like 2 to 4 and 4 to 8 and 8 to 16
 //vector is also caused storage wastage
 
 //default size of vector is 0
//  vector<int>arr; //initialization of vector .. here int is datatype of vector and arr is vector name
//  vector<int>arr1(10);//arr1 array with 10 size and all value is 0
//  vector<int>arr2(10,-1);//arr1 array with 10 size and all value is -1
//  vector<int>arr3{1,2,3,4,5}; //array with size 5 and normally this method is not used

//  //declalre
//  arr.push_back(1); //for enter the element
//  arr.push_back(2);
//  for (int i = 0; i < arr.size(); i++)
//  {
//     cout<<arr[i]<<" ";
//  }
//  arr.pop_back(); //for remove the element
//  cout<<endl;
//  for (int i = 0; i < arr.size(); i++)
//  {
//     cout<<arr[i]<<" ";
//  }
//  cout<<endl;
//  cout<<arr.size(); // number of occupied element
//  cout<<endl;
//  cout<<arr.empty(); //1 or 0
//  cout<<endl;
//  cout<<arr.capacity(); //number of element the vector is capable of store
//  int n;
//  cin>>n;
//  vector<int>arrn(n);
//  for (int i = 0; i < arrn.size(); i++)
//  {
//     cout<<arrn[i]<<" ";
//  }
 
 //print unique number from the array which has 1 unique element and other has 2 time occurs
//  int n;
//  int ans = 0;
// cin>>n;
// vector<int>arr(n);
// for (int i = 0; i < arr.size(); i++)
// {
//     cin>>arr[i];
// }
// for (int i = 0; i < arr.size(); i++)
// {
//     ans = ans^arr[i];
// }
// cout<<"unique value is :"<<ans;

//Union of two array
// int arr1[] = {1,2,3,4,5};
// int arr2[] = {6,7,8,9,10};
// vector<int>ans;

// for (int i = 0; i < 5; i++)
// {
//     ans.push_back(arr1[i]);
// }
// for (int i = 0; i < 5; i++)
// {
//     ans.push_back(arr2[i]);
// }
// for(auto val : ans){
//     cout<<val<<" ";
// }
 
//union with duplicate
// int arr1[] = {1,2,3,3,5,5};
// int arr2[] = {6,7,8,9,9,10};
// vector<int>ans;
// for (int i = 0; i < 6; i++)
// {
//     ans.push_back(arr1[i]);
//     for (int j = i+1 ; j < 6; j++)
//     {
//         if(arr1[i] == arr1[j]){
//             arr1[j] = INT_MIN;
//         }
//     }
// }
// for (int i = 0; i < 6; i++)
// {
//     ans.push_back(arr2[i]);
//     for (int j = i+1 ; j < 6; j++)
//     {
//         if(arr2[i] == arr2[j]){
//             arr2[j] = INT_MIN;
//         }
//     }
// }
// for(auto val : ans){
//     if(val != INT_MIN){
//         cout<<val<<" ";
//     }
// }
 
//intersection of two array
// vector<int>arr1{2,2,3,4,5};
// vector<int>arr2{2,2,8,9,10};
// vector<int>ans;
// for (int i = 0; i < arr1.size(); i++)
// {
//     //traversal in 1st array
//     for (int j = 0; j < arr2.size(); j++)
//     {
//         //traversal in 2nd array
//         if (arr1[i] == arr2[j])
//         {
//             ans.push_back(arr1[i]);
//             arr1[i] = INT_MIN; //eliminate 2nd array duplicates
//             arr2[j] = INT_MIN; //eliminate 1st array duplicates
//         }
//     }
// }
// for(auto val:ans){
//     cout<<val<<" ";
// }

//pair sum in 1 array
// int n; 
// int sum;
// vector<int>arr(n);
// cout<<"Enter the sum:";
// cin>>sum;
// cout<<"Enter the size of array :";
// cin>>n;
// for (int i = 0; i < n; i++)
// {
//     //for taking input in the array
//     cin>>arr[i];
// }
// for (int i = 0; i < n; i++)
// {
//     //for traverse the 1st number
//     for (int j = i+1; j < n; j++)
//     {
//         if(arr[i]+arr[j] == sum){
//             cout<<arr[i]<<","<<arr[j]<<endl;
//         }
//     }
// }

//k pair sum in 2 array
// int sum;
// int n1;
// int n2;
// cout<<"Enter the sum :";
// cin>>sum;
// cout<<"Enter the size of the 1st array :";
// cin>>n1;
// cout<<"Enter the size of the 2nd array :";
// cin>>n2;
// vector<int>arr1(n1);
// vector<int>arr2(n2);
// cout<<"Enter the 1st array elements :";
// for (int i = 0; i < n1; i++)
// {
//     cin>>arr1[i];    
// }
// cout<<"Enter the 2nd array elements :";
// for (int i = 0; i < n2; i++)
// {
//     cin>>arr2[i];    
// }
// //for traversing 1st element
// for (int i = 0; i < n1; i++)
// {
//     for (int j = 0; j < n2; j++)
//     {
//        if(arr1[i]+arr2[j] == sum){
//         cout<<arr1[i]<<"+"<<arr2[j]<<"="<<sum<<endl;
//        }
//     }
// }

//sort 0's and 1's (with three pointer)
// int n;
// cout<<"Enter the size of array :";
// cin>>n;
// vector<int>arr(n);
// int start = 0;
// int end = n-1;
// int index = 0;
// cout<<"Enter only 0's and 1's in this array :";
// //for taking input from the user
// for (int i = 0; i < n; i++)
// {
//     cin>>arr[i];
// }
// for(auto val:arr){
//     cout<<val<<"";
// } 
// cout<<endl;
// //for sorting the array
// while (start <= end)
// {
//     if (arr[index] == 0)
//     {
//         swap(arr[start],arr[index]);
//         index++;
//         start++;
//     }else{
//         swap(arr[index],arr[end]);
//         end--; 
//     }
// }
// for (int i = 0; i < arr.size(); i++)
// {
//     cout<<arr[i];
// }

//left rotate an array by 1 element   
// vector<int>arr{2,4,6,8,10};
// int n;
// n = arr.size();
// vector<int>ans(n);
// for (int i = 1 ; i < n; i++){
//     ans[i-1] = arr[i];
// }
// ans[n-1] = arr[0];
// for (int i = 0; i < ans.size(); i++)
// {
//     cout<<ans[i]<<" ";
// }


// in hw week 4 file
//dynamic rotate
//majority element
//buy and sell stock level 1









return 0;
 }