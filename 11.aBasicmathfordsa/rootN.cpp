//optimal approach (basic for placement)
//1 to N prime numbers
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
 
bool isPrime(int n){
    int sqrtN = sqrt(n);

    for(int i = 2;i<=sqrtN;i++){
  
        if(n%i == 0){
            
            return false;
        }

          
        
    }
      return true;
}


int main(){
  int n = 53;
  vector<int>ans;

  for(int i = 2;i<=n;i++){

if(isPrime(i)){
    ans.push_back(i);
}
  }
  for(auto i:ans){
    cout<<i<<" ";
  }

  return 0;
 }