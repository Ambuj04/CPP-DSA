#include<iostream>
#include<limits.h>
#include<vector>

using namespace std;
 
void rotateArr(int arr[],int n,int k,int side){
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        temp[i] = arr[i];
    }
    if(side == 1){
        //left rotate
        for (int i = 0; i < n; i++)
        { 
            temp[i] = arr[(n+i+k)%n];
        }
    }else{
        //right rotate
        for (int i = 0; i < n; i++)
        {
            temp[i] = arr[(n+i-k)%n];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<temp[i];
    }
}


int majorityElem(int arr[],int n){
    int temp[n];
    int counter;
    for (int i = 0; i < n; i++)
    {
        counter=0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                counter++;
            }
        }
        temp[i] = counter;
    }
    int maxi = INT_MIN;
for (int i = 0; i < n; i++)
{
    if(temp[i] > maxi){
        maxi = temp[i];
    }
}
for (int i = 0; i < n; i++)
{
    if(maxi == temp[i]){
        int number;
        number = arr[i];
        if(maxi > (n/2) ){
            cout<<" majority element is :";
            return number;
        }else{
            return -1;
        }
    }
}





}


int main(){

//rotate array

  int n;
  cout<<"enter n of the array :";
  cin>>n;
//   cout<<"Enter number of element want to rotate :";
//   int k;
//   cin>>k;
//   int side;
//   cout<<"Enter 1 for left rotate and other for left :";
//   cin>>side;
  cout<<"enter elements in the array :";
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
//   rotateArr(arr,n,k,side);


//  majority element
// cout<<majorityElem(arr,n);

//buy and sell stock
//  vector<int>profit;
// for (int i = 0; i < n; i++)
// {
//     for (int j = i+1; j < n; j++)
//     {
//         profit.push_back(arr[j]-arr[i]);
//     }
// }
// int maxi = INT_MIN;
// for (int i = 0; i < profit.size(); i++)
// {
//     if(maxi < profit[i]){
//         maxi = profit[i];
//     }
// }
// if(maxi <= 0 ){
//     cout<<"transaction not done";
// }else{
//     for (int i = 0; i < n; i++)
// {
//     for (int j = i+1; j < n; j++)
//     {
//         if (maxi == (arr[j]-arr[i])){
//             cout<<"Buy day is "<<i+1<<" Sell day is "<<j+1<<" profit is "<<maxi;
//         };
//     }
// }
// }
  

    return 0;
 }