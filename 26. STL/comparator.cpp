//define sorting behaviour
#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
    // if(a>b){
    //     return true;
    // }

     //jis order me chahiye us cheez ko return kro

     return a>b;//decending order

}
int main(){
    vector<int>v = {1,2,34,6,4554,34,3,6545};
    sort(v.begin(),v.end()); //default ascending
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    //for swap return false
    //for not swap return true
    
    sort(v.begin(),v.end(),cmp);
    for(auto i:v){
        cout<<i<<" ";
    }
    //inbuilt comparator examples : greater<int>()
    sort(v.begin(),v.end(),greater<int>());
    cout<<endl;
    for(auto i:v){
        cout<<i<<" ";
    }

}