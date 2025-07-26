#include<iostream>

using namespace std;
 
int main(){
  int dividend = 200;
  int divisor = 9;
  int s = 0;
  int e = 200;
  int mid;
  int ans = -1;
  while (s<=e)
  {
    mid = (s+e)/2;
    if(mid*divisor == dividend){
        ans = mid;
        break;
    }else if(mid*divisor < dividend){
        s = mid + 1;
        ans = mid;


    }else if(mid*divisor > dividend){
        e = mid-1;
       

    }
  }
  
 cout<<ans;
return 0;
 }