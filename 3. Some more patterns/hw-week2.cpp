#include<iostream>

using namespace std;
 
int main(){

//   fancy pattern
//  int n=5;
//  cout<<"*"<<endl;
//  for (int i = 0; i < n; i++)
//  {
//     int cond = i <= n/2 ? 2*i : 2*(n-i-1);
//     for (int j = 0; j <= cond; j++)
//     {
//         if(j <= cond/2){
//             if(j == 0 ){
//                 cout<<"*";
//             }
//             cout<<j+1;
//         }else{
//             cout<<cond-j+1;
//             if(j == cond){
//                 cout<<"*";
//             }
//         }
//     }
//     if(i == 0 || i == (n-1))
//     {
//         cout<<"*";
//     }
//     cout<<endl;
//  }
//  cout<<"*"<<endl;
  
//fancy pattern
// int n=4;
// int c=1;
// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j <= i; j++)
//     {
//         cout<<c;
//         c++;
//         if(j<i){
//             cout<<"*";
//         }
//     }
//     cout<<endl;
// }
// int start = c-n;
// for (int i = 0; i < n; i++)
// {
//     int k = start;
//     for (int j = 0; j < n-i; j++)
//     {
//         cout<<k;
//         k++;
//         if(j< n-i-1){
//             cout<<"*";
//         }
//     }
//     start = start -(n-i-1);
//     cout<<endl;
// }

//butterfly pattern
// int n = 5;
// for (int row = 0; row < n; row++)
// {
//     for (int col = 0; col < row+1; col++)
//     {
//         cout<<"*";
//     }
//     for (int col = 0; col < 2*(n-row-1); col++)
//     {
//         cout<<" ";
//     }
//     for (int col = 0; col < row+1; col++)
//     {
//         cout<<"*";
//     }
//     cout<<endl;
// }
// for (int row = 0; row < n; row++)
// {
//     for (int col = 0; col < n-row; col++)
//     {
//         cout<<"*";
//     }
//     for (int col = 0; col < 2*(row); col++)
//     {
//         cout<<" ";
//     }
//     for (int col = 0; col < n-row; col++)
//     {
//         cout<<"*";
//     }
//     cout<<endl; 
// }

//Functions Homework  

//WAP to display area of circle


 
return 0;
 }