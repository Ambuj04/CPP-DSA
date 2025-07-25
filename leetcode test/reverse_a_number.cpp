#include<iostream>
#include <limits.h>
using namespace std;


    int reverse(int x) {
        if( x <= INT_MIN){
        return 0;
       }
        int ans=0;
        int rem=0;
       bool isneg = false;
       if(x<0){
        isneg = true;
        x =-x;
       }
       while(x>0){
         if(ans >INT_MAX/10 ){
        return 0;
       }
        rem = x%10;
        ans = ans*10 + rem;
         x/= 10;

        
       }

       
       return isneg ? -ans : ans;
   
    }

    int main(){
        //    cout<<reverse(314);//413
        // cout<<reverse(-314); //-413
    //    cout<<reverse(120);//21
    //    cout<<reverse(1534236469);
    // cout<<reverse(-2147483412);
    //    cout<<endl<<INT_MIN;

    // cout<<INT_MAX; //2147483647
  
    // 214748364[0-7] allow .if 214748365 hua toh overflow ho jayega thats why  INT_MAX/10

  
    
    }