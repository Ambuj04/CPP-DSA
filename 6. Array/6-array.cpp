#include<iostream>
#include<cstring> // use for memset
#include<limits.h>

using namespace std;


//used for arrays and function
void printArray(int arr[],int size){
    for (int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void inc(int array[],int size){
    array[0] = 1;
    printArray(array,size); 
}
 
int main(){
//  int arr[10]; //declare
//  int arr1[] = {1,2,3,4,5}; // initialization
//  int arr2[10] = {5,4,3,2,1}; // initialization

// cout<<arr1[10]; //garbage value

 //works but bad practice
//  int n;
//  cin>>n;
//  int arr3[n];
  
// int arr[500];
// int n;
// cout<<"Enter number of integers :";
// cin>>n;
// for (int i = 0; i < n; i++)
// {
//     cin>>arr[i];
// }
// //for double
// for (int i = 0; i < n; i++)
// {
//     cout<<2*arr[i]<<" ";
// }

//set all element to 1
// int arr[]= {1,2,3,4,5};
// for (int i = 0; i < 5; i++)
// {
//     arr[i] = 1;
// }
// for (int i = 0; i < 5; i++)
// {
//     cout<<arr[i]<<" ";
// }


//set all element is -1 by memset function which is included in cstring header file
// int arr[10];
// memset(arr,-1,sizeof(arr)); //-1 & 0 is only allowed in memset bcz of hardware region
// for (int i = 0; i < 10; i++)
// {
//     cout<<arr[i]<<" ";
// }

//Arrays and fucntion (in function array is pass by reference , and pass by value is not allowed)
// int arr[]={0,1};
// int size = 2;
// inc(arr,size); // [1 , 1]
// printArray(arr,size); // [1 , 1]
//means in function array is pass by reference

//Linear Search in Array
// int arr[] = {1,2,3,4,5};
// int size = 5;
// bool flag = 0;
// int key;
// cout<<"Enter the number you want to search in the array :";
// cin>>key;
// for (int i = 0; i < 5; i++)
// {
//     if (arr[i] == key)
//     {
//         flag = 1;
//         break;;
//     }
// }
// if (flag == 1)
// {
// cout<<"Found ";
// }else{
//     cout<<"Not found";
// }

//Counts all 0's and 1's in the array
// int arr[] = {1,2,0,1,0,5,0,6,1,0,0,0,1,5,0};
// int size = 15;
// int numof1 = 0;
// int numof0 = 0;
// int numofother = 0;
// for (int i = 0; i < size; i++)
// {
//     if (arr[i]==0)
//     {
//         numof0++;
//     }else if(arr[i]==1){
//         numof1++;
//     }else{
//         numofother++;
//     }
// }
// cout<<"number of 0 is "<<numof0<<endl;
// cout<<"number of 1 is "<<numof1<<endl;
// cout<<"number of other is "<<numofother<<endl;
    

//Find Maximum number in the array
// int max = INT_MIN; //Best practice to use INT_MIN for find max in array
// int arr[5] = {1,15,4,2,3};
// int size = 5;
// for (int i = 0; i < size; i++)
// {
//     if (max < arr[i])
//     {
//         max = arr[i];
//     }
// }
// cout<<max;


//Min from the array
// int min = INT_MAX; //Best practice to use INT_MAX for find max in array
// int arr[5] = {1,15,4,2,3};
// int size = 5;
// for (int i = 0; i < size; i++)
// {
//     if (min > arr[i])
//     {
//         min = arr[i];
//     }
// }
// cout<<min;

//Extreme Print in array
int oddarr[5] = {1,3,5,7,9};
int evenarr[6] = {2,4,6,7,10,12};
int oddsize = 5;
int evensize = 6;

//for even
// int start = 0;
// int end = (evensize-1) - start;
// for (int i = 0; i < evensize; i++)
// {
//     if(start < end){
//         cout<<evenarr[start]<<" "<<evenarr[end]<<" ";
//         start++;
//         end--;
//     }else{
//         break;
//     }
// }

//for odd
// int start = 0;
// int end = (oddsize-1) - start;
// while (start <= end)
// {
//     if(start == end){
//         cout<<oddarr[start]<<" ";
//     }else{
//         cout<<oddarr[start]<<" "<<oddarr[end]<<" ";
//     }
//     start++;
//     end--;
// }

//Reverse an array
//Method 1
// int arr[] = {1,-2,3,4,5};
// int size = 5;
// int start = 0;
// int end = (size-1) - start;
// while (start <= end)
// {
//     swap(arr[start],arr[end]);
//     start++;
//     end--;
// }
// for (int i = 0; i < size; i++)
// {
//     cout<<arr[i]<<" ";
// }

//Method 2
// int arr[] = {1,-2,3,4,5};
// int size = 5;
// cout<<endl;
// for (int i = (size-1); i >= 0 ; i--)
// {
//     cout<<arr[i]<<" ";
// }
















 
return 0;
 }