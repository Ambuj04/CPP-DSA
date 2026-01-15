#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<endl<<'\n';
    // int integer = (int)(1e6);//1000000
    int integer = int(1e6);
    /*1000000 
    type casting
    explicit
    larger to smaller data types
    risk of data loss*/
    int a = 5;
    float b = a; //type conversion  implicit
    double doublee = 10000;
    cout<<sizeof(doublee/integer);//8  (double dominates) 

    
    
}