#include<iostream>

using namespace std;
void print(int n){
    //base case
    if(n == 0){
        return ;
    }
    //recursion
    print(n-1);
    //1 case solve
    cout<<n<<" ";
    return;
}
int main(){
  print(5);
 
return 0;
 }