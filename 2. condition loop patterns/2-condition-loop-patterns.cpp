#include<iostream>

using namespace std;

int main(){
    // int a;
    // cin>>a;
    // if(a>=5){
    //     cout<<"a is greater than 5";
    // }else if(a>=3){
    //     cout<<"a is greater than 3";
    // }else{
    //     cout<<"none";
    // }
// if and else if me jo bhi pehle true hua woh run hoga then exit conditons
        
    //loop (for,while,do while,for each)

    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<i<<endl;
    // }
    
    //patterns


//1 solid rectangle
    // for (int row = 0; row < 3; row++)
    // {
    //     for (int col = 0; col < 5; col++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    //     // * * * * *
    //     // * * * * *
    //     // * * * * *
    // }

//2 square pattern
    //   int NoRowCols;
    //   cin>>NoRowCols;
    // for (int row = 0; row < NoRowCols ; row++)
    // {
    //     for (int col = 0; col < NoRowCols; col++)
    //     {
    //            cout<<"* ";
    //     }
    //      cout<<endl;
    // }
    
//3 Hollow Rectangle
// for (int row = 0; row < 3; row++)
// {
//     for (int col = 0; col < 5; col++)
//     {
    //         if(row == 1){
//                 if(col==0 || col == 4){
//                     cout<<"* ";
//                 }else{
//             cout<<"  ";
//                 }
//         }else{
//             cout<<"* ";
//         }
//     }
//         cout<<endl;
    // }

// for (int row = 0; row < 3; row++)
// {
//     if(row == 0 || row == 2){
//         for (int col = 0; col < 5; col++)
//         {
//             cout<<"*";
//         }
        //     }else
//     {
//         cout<<"*";
//         for (int i = 1; i < 4; i++)
//         {
//         cout<<" ";                
//         }
//         cout<<"*";
//     }
//         cout<<endl;
    // }

//4 Half pyramid
// int rows;
// cin>>rows;
// for (int row = 0; row < rows; row++)
// {
//     for (int col = 0; col < row+1; col++)
//     {
//         cout<<"* ";
//     }
//     cout<<endl;
// }

//5 Inverted Half pyramid
// int rows;
// cin>>rows;
// for (int row = 0; row < rows; row++)
// {
//     for (int col = 0; col < (rows-row); col++)
//     {
//         cout<<"* ";
//     }
//     cout<<endl;
// }

//6 numeric half pyramid
// int rows;
// cin>>rows;
// for (int row = 0; row < rows; row++)
// {
    //     for (int col = 0; col < row+1; col++)
//     {
//         cout<<col+1<<" ";
//     }
//     cout<<endl;
// }

//7 Inverted Numeric half pyramid
// int numrows;
// cin>>numrows;
// for (int row = 0; row < numrows; row++)
// {
//     for (int col = 0; col < numrows-row ; col++)
//     {
//         cout<<col+1<<" ";
//     }
//     cout<<endl;
// }

//8 full pyramid 
// int numrows;
// cin>>numrows;
// for (int row = 0; row < numrows; row++)
// {
//     for (int col = 0; col < numrows-row; col++)
//     {
//        if((col+row) == (numrows-1) ){
// for (int star = 0; star < (row+1); star++)
// {
//         cout<<"x"<<" ";
//     } }else{
//         cout<<" ";
//        }
//     }
//     cout<<endl;
// }

//8A Full pyramid
// for (int row = 0; row < 5; row++)
// {
//     for (int colspace = 0; colspace < 4-row ; colspace++)
//     {
//         cout<<" ";
//     }
   //     for (int colstar = 0; colstar < row+1; colstar++)
//     {
//         cout<<"* ";
         //     }
//     cout<<endl;
    // }

 //9 Inverted Full pyramid  
// for (int row = 0; row < 5; row++)
//  {
//     for (int spacecol = 0; spacecol < row; spacecol++)
//     {
//         cout<<" ";
//     }
//     for (int starcol = 0; starcol < 5-row; starcol++)
//     {
        //         cout<<"* ";
//     }
//     cout<<endl;
// }
 

}