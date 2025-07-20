#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;



// void transposeArr(int arr[][3],int transpose[][3],int rows,int cols){
    //swap not work bcz swap run two time . first when row run and second when col run .therefore we need another array
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         swap(arr[i][j],arr[j][i]);
    //     }
    // }
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //   cout<<arr[i][j] ;
    //        }
    // cout<<endl;    
    // }
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             transpose[j][i] = arr[i][j];
//         }
//     }
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//       cout<<transpose[i][j] ;
//            }
//     cout<<endl;    
//     }
// }



 
int main(){

 //2D array or vector

 // row print 
 //col print
 //row sum
 // col sum
 //linear search

// int array[2][2]={{1,2},{3,4}}; //here 2 rows and 2 columns
//  array[2][2] = {{1,2},{3,4}};  this is not supported
// int sum; //for find row and col sum
// int key = 6;int found;   //for linear search
// for (int i = 0; i < 2; i++)
// {
    // sum = 0;
    // for (int j = 0; j < 2; j++)
    // {
        // cout<<array[i][j]<<" "; //row wise printt
        // cout<<array[j][i]<<" "; //col wise printt
        // sum = sum + array[i][j]; //row sum
        // sum = sum + array[j][i]; //col sum
        // if(key == array[i][j]){
        // for search
        //     found = 1;
        //     break;
        // }
    // }
    // if(found == 1){
     //for search
    //     break;
    // }
    // cout<<sum;
    // cout<<endl;
// }
//for search
// if(found == 1){
//     cout<<"found";
// }else{
//     cout<<"not found";
// }

//array input
// int arr[3][3];
// int row = 3;
// int col = 3;
// for (int i = 0; i < row; i++)
// {
//     for (int j = 0; j < col; j++)
//     {
//     cin>>arr[i][j]; //row wise input
//     // cin>>arr[j][i]; //col wise input
//     }
// }
// //array print
// for (int i = 0; i < row; i++)
// {
//     for (int j = 0; j < col; j++)
//     {
//     cout<<arr[i][j]<<" "; 
//     }
//     cout<<endl;
// }

//max in 2D array
// int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
// int maxi = INT_MIN;
// for (int i = 0; i < 3; i++)
// {
//     for (int j = 0; j < 3; j++)
//     {
//         if (maxi < arr[i][j])
//         {
//             maxi = arr[i][j];
//         }
//     }
// }
// cout<<maxi;

//min in 2D array
// int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
// int mini = INT_MAX;
// for (int i = 0; i < 3; i++)
// {
//     for (int j = 0; j < 3; j++)
//     {
//         if (mini > arr[i][j])
//         {
//             mini = arr[i][j];
//         }
//     }
// }
// cout<<mini;

//transpose of 2D array
// int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
// int transpose[3][3]= {{1,1,1},{1,1,1},{1,1,1}};

// int cols = 3;
// int rows = 3;

// transposeArr(arr,transpose,rows,cols);



// vector<vector <int>>arr(3,vector<int>(3,1)); // 3 row 3 col array initiated with 1
// vector<vector <int>>transpose(3,vector<int>(3,0)); // 3 row 3 col array initiated with 1
// vector<vector <int>>arr(3,vector<int>(4,0)); // 3 row 4 col array initiated with 0




return 0;
 }