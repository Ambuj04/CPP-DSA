#include<iostream>
using namespace std;
int main(){
    //Hollow inverted half pyramid
    // for (int row = 0; row < 6; row++)
    // {
    //     for (int col = 0; col < 6-row; col++)
    //     {     
    //         if (row == 0 ||col==0 || col== (6-row-1) )
    //         {
    //             cout<<"*";
    //         }
    //         else{      
    //                 cout<<" ";
    //             }
    //         } cout<<endl;
    //     }
    
    //Hollow full pyramid
     //Method-1
    // for (int i = 0; i < 6; i++)
    // {
    //     for (int j = 0; j < (6-i); j++)
    //     {
    //         if(j == (6-i-1)){
    //             for (int k = 0; k < ((2*i)+1); k++)
    //             {
    //                 cout<<"x";
    //             }
                 //         }else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }
    
    //Method-2
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    { int k=0;
        for (int j = 0; j < (2*n-1); j++)
        {
            if (j<(n-i-1))
            {
              cout<<" ";
            }else if(k < 2*i+1){
                cout<<"*";
                k++; //k++ is used for condition fulfillment like 1start 123star 12345star 
            }else{
                cout<<" ";
            }
            
        }
        cout<<endl;
        
    }
    
}