#include<iostream>

int square(int num){

    int s = 1;
 int e = num;
 int mid ;
 int ans;
 while (s<=e)
 {
    mid = (s+e)/2;
    if(mid*mid == num){
        return ans;
        
       
    }else if(mid*mid < num){
        //right search
        ans = mid;
        s = mid+1;
    }else{
        e = mid-1;
    }
}
return ans;
}

using namespace std;
 
int main(){
 int num = 90;
 
int ans = square(num);




 double step = 0.1;
double finalans = ans;
int precision = 5;
for(int i = 0;i< precision;i++){
    for (double j = finalans;  j*j<=num; j=j+step)
    {
        finalans = j;
       
    }
    step =step / 10;
    
}
cout<<finalans;






return 0;
 }