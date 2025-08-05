#include<iostream>
using namespace std;

int power(int baar,int &ans){
 //base case
    if(baar == 1){
        return ans;
    }
//1 case solve
    ans = ans * power(baar-1,ans);

    return ans;
}

int main(){
    int number = 3;
    int baar = 2;

    cout<<number <<" power "<<baar<<" is : ";
    cout<<power(baar,number);
  
 
return 0;
 }