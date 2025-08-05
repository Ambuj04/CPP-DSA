#include<iostream>

using namespace std;
void print(int n){
    //base case
    if(n == 0){
        return ;
    }
    //1 case solve
    cout<<n<<" ";
    //recursion
    print(n-1);
    return;
}
int main(){
  print(5);
 
return 0;
 }