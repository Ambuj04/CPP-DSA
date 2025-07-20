#include<iostream>
using namespace std;
int main(){
//Solid diamond pattern
// int n;
// cin>>n;
// for (int row = 0; row < n; row++)
// {
//     for (int colspace = 0; colspace < n-row-1; colspace++)
//     {
//         cout<<" "; //print upper diamond space
//     }
//     for (int colstar = 0; colstar < row+1; colstar++)
//     {
//         cout<<"* "; //print upper diamond star
//     }
//    cout<<endl;
// }
// for (int row = 0; row < n-1; row++)
// { cout<<" ";
//     for (int colspace = 0; colspace < row; colspace++)
//     {
//         cout<<" "; //print down diamond space
//     }
//     for (int colstar = 0; colstar < n-1-row; colstar++)
//     {
//         cout<<"* "; //print down diamond star
//     }
//    cout<<endl;
// }

//Hollow diamond pattern
// int n = 4;
// for (int row = 0; row < n; row++)
// {
    //     for (int col = 0; col < n; col++)
//     {
//         if(col == n-1-row || col== n-row){
//             cout<<"x";
//             for (int i = 0; i < row*2; i++)
//             {
//                 cout<<" ";
//             }
            //         }else{
//             cout<<" ";
//         }
//     }
//     cout<<endl;
// }
// for (int row = 0; row < n-1; row++)
// {
//     cout<<" ";
//     for (int col = 0; col < n-row; col++)
//     {
        //         if(col == 0 || col == 1){
//             cout<<"x ";
//         }else{
//             cout<<" ";
//         }
//     }
    //     cout<<endl;
// }
//By help
// int n;
// n = 5;
// for (int row = 0; row < n; row++)
// {
//     //for spaces
//     for (int col = 0; col < n-row-1; col++)
//     {
//         cout<<" ";
//     }
//     //for stars
//     for (int col = 0; col < 2*row+1; col++)
//     {
//         if(col==0 || col == 2*row){
//             cout<<"*";
//         }else{
//             cout<<" ";
//         }
//     }
//     cout<<endl;
// }
// for (int row = 0; row < n-1; row++)
// {
// cout<<" ";
//     for (int col = 0; col < row; col++)
//     { //spaces
//         cout<<" ";
//     }
//     for (int col = 0; col < (2*(n-1))-(2*row+1); col++){
//     //star
//            if(col == 0 || col == (2*(n-1))-(2*row+1)-1){
//             cout<<"*";
//         }else{
//             cout<<" ";
//         }
//     }
//     cout<<endl; 
// }

//Flippied Solid Diamond
// int n;
// n=5;
// for (int row = 0; row < n; row++)
// {//for upper
// //inverted half pyramid
// for (int col = 0; col < n-row; col++)
// {
//     cout<<"*";
// }
// //full space pyramid
// for (int col = 0; col < 2*row+1; col++)
// {
//     cout<<" ";
// }
// //half pyramid
// for (int col = 0; col < n-row; col++)
// {
//     cout<<"*";
// }
// cout<<endl;
// }
// //for lower
// for (int row = 0; row < n; row++)
// {
//     //for half pyramid
//     for (int col = 0; col < row+1; col++)
//     {
//         cout<<"*";
//     }
//     //for space inverted full pyramid
//     for (int col = 0; col < 2*n-2*row-1; col++)
//     {
//         cout<<" ";
//     }
//     //for half pyramid
//     for (int col = 0; col < row+1; col++)
//     {
//         cout<<"*";
//     }
//     cout<<endl;
// }

//Fancy Pattern
// int n;
// n=5;
// //for upper
// for (int row = 0; row < n; row++)
// {
//     for (int col = 0; col < row+1; col++)
//     {
//         cout<<row+1;
//         if(col == row){
//             cout<<" ";
//         }else{
//             cout<<"*";
//         }
//     }
//     cout<<endl;
// }
// //for lower
// for (int row = 0; row < n; row++)
// {
//     for (int col = 0; col < n-row; col++)
//     {
//         cout<<n-row;
//         if(col != n-row-1){
//             cout<<"*";
//         }
//     }
//     cout<<endl;
// }

//Alphabet Palindrome Pyramid
// int n;
// n=5;
// for (int row = 0; row < n; row++)
// {
//     int col;
//     //for ascending
//     for (col = 0; col < row+1; col++)
//     { int ans = col+1;
//         char ch = 'A';
// char final = ans + ch -1;
//         cout<<final;
//     }
//     col--;
//     //for decending
//     for (; col >= 1; col--)
//     {
//         int ans = col;
//         char ch = 'A';
//         char final = ans+ch-1;
//         cout<<final;
//     }
//     cout<<endl;
// }

//Solid Square
// int n;
// n = 5;
// for (int row = 0; row < n; row++)
// {
//     for (int col = 0; col < n; col++)
//     {
//       cout<<"*";
//     }
//     cout<<endl;
// }

//hollow square
// int n;
// n = 5;
// for (int row = 0; row < n; row++)
// {
//     for (int col = 0; col < n; col++)
//     {
//         if (row == 0 || row == n-1)
//         {
//             cout<<"*";
//         }else
//         {
//             if (col == 0 || col == n-1 )
//             {
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }
//         }
//     }
//     cout<<endl;
// }

//Hollow inverted Half pyramid
// int n;
// n = 5;
// for (int row = 0; row < n; row++)
// {
//     for (int col = 0; col < n-row; col++)
//     {
//         if (row == 0 || row == n-1)
//                 {
//                     cout<<"*";
//                 }else
//                 {
//                     if (col == 0 || col == n-row-1 )
//                     {
//                         cout<<"*";
//                     }else{
//                         cout<<" ";
//                     }
//                 }  
//     }
//     cout<<endl;
// }

//hollow full pyramid
// int n;
// n = 5;
// for (int row = 0; row < n; row++)
// {
//     for (int col = 0; col < n-row; col++)
//     {
//        cout<<" ";
//     }
//     for (int col = 0; col < row+1; col++)
//     {
//         cout<<"* ";
//     }
//     cout<<endl;
// }

//Numeric hollow half pyramid
// int n;
// n=5;
// for (int row = 0; row < n; row++)
// {
//     for (int col = 0; col < row+1; col++)
//     {
//         if(row == 0 || row == n-1){
//             cout<<col+1;
//         }else
//         {
//             if(col == 0 || col==row){
//                 cout<<col+1;
//             }else
//             {
//                 cout<<" ";
//             }
//         }
//     }
//     cout<<endl;
// }

//Numeric hollow inverted half pyramid
// int n;
// n = 5;
// for (int row = 0; row < n; row++)
// {
//     for (int col = 0; col < n-row; col++)
//     {
//         if (row == 0 || row == n-1)
//         {
//             cout<<col+1;
//         }else
//         {
//             if (col == 0 || col == n-row-1)
//             {
//                 cout<<col+1;
//             }else{
//                 cout<<" ";
//             }
//         }
//     }
//     cout<<endl;
// }

//Numeric palindrome equilateral pyramidal
// int n;
// n=4;
// for (int row = 0; row < n; row++)
// {
//     //for left
//     for (int col = 0; col < n-row-1; col++)
//     {
//         cout<<" ";
//     }
//     //for middlle
//     int col;
//     for ( col = 0; col < row+1; col++)
//     {
//         cout<<col+1;
//     }
//     col--;
//     //for left
//     for (; col >= 1; col--)
//     {
//         cout<<col;
//     }
// cout<<endl;
// }

//Fancy pattern
// int n;
// n=5;
// for (int row = 0; row < n; row++)
// {
//     //for left star pattern
//     for (int col = 0; col < 2*n-row; col++)
//     {
//         cout<<"*";
//     }
//     //for middle
//     for (int col = 0; col < row+1; col++)
//         {
//             cout<<row+1;
//             if(col == row){
//                 cout<<"";
//             }else{
//                 cout<<"*";
//             }
//         }
//         //for right
//         for (int col = 0; col < 2*n-row; col++)
//         {
//             cout<<"*";
//         }
// cout<<endl;    
// }

//Solid half diamond
// int n;
// n = 5;
// for (int row = 0; row < n; row++)
// {
//     for (int col = 0; col < row+1; col++)
//     {
//         cout<<"*";
//     }
// cout<<endl;}
// for (int row = 0; row < n-1; row++)
// {
//     for (int col = 0; col < n-1-row; col++)
//     {
//         cout<<"*";
//     }
//     cout<<endl;
// }

//fancy pattern
// int n;
// n =4;
// for (int  row = 0; row < n; row++)
// {
//     for (int col = 0; col < 2*row+1; col++)
//     {
//         if(col == 0 || col == 2*row){
//             cout<<"*";
//         }else
//         {
//             cout<<col;
            
            
//         }
        

//     }
//     cout<<endl;
// }


//Fancy pattern
// int n = 4;
// int num = 1;
// for (int row = 0; row < n; row++)
// {
//     for (int col = 0; col < row+1; col++)
//     {
//         cout<<num;
//         if(col != row){
//             cout<<"*";
//     }
//         num++;
        
//     }
//     cout<<endl;
// }

// // cout<<num1;



// int num1 = num-n;

// for (int row = 0; row < n; row++)
// {
    
    
//     for (int col = 0; col < n-row; col++)
//     {
//         cout<<num1;
//         num1++;
        
        
//     }
   
   

//     cout<<num1;

    
//     cout<<endl;
// }



//flyod triangle
// int n = 5;
// int a=1;
// for (int row = 0; row < n; row++)
// {
//     for (int col = 0; col < row+1; col++)
//     {
//         cout<<a;
//         a++;
//     }
//     cout<<endl;
    // }

//Butterfly pattern

//numeric full pyramid
// int n = 5;
// for (int row = 0; row < n; row++)
// {
// //print space
// for (int col = 0; col < n-row-1; col++)
// {
//     cout<<" ";
// }
// //middle number pyramid
// int start = row + 1;
// for (int col = 0; col < row+1; col++)
// {
//     cout<<start;
//     start++;
// }
// start--;
// start--;
// //for right row
// for (int col = 0; col < row; col++)
// {
//     cout<<start;
//     start--;
// }
//for middle
// for (int col = 0; col < row+1; col++)
// {
//     cout<<row+col+1;
// }
// //for right row
// int start=2*row;
// for (int col = 0; col < row; col++)
// {
//     cout<<start;
//     start--;
// }
// cout<<endl;
// }

//numeric hollow pyramid
// int n = 5;
// for (int row = 0; row < n; row++)
// {
//     for (int col = 0; col < n-row-1; col++)
//     {
//         cout<<" ";
//     }
//     int start = 1;
//     for (int col = 0; col < 2*row+1; col++)
//     {
//         if(row == 0 || row == n-1){
//             if(col%2 == 0){
//                 cout<<start;
//                 start++;
//             }else{
//                 cout<<" ";
//             }
//         }else{
//             if(col == 0){
//                 cout<<1;
//             }else if(col == 2*row){
//                 cout<<row+1;
//             }else{
//                 cout<<" ";
//             }
//         }
//     }
//     cout<<endl;
// }




}