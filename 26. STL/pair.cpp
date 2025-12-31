#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,string>p;
    pair<int,string>q=p;//copy
    pair<int,string>&r=p;//by reference
    p=make_pair(1,"ambuj");
    // cout<<p.first;
    // cout<<p.second;
    p={2,"chaurasia"};
    cout<<p.first;
    cout<<p.second;

    pair<int,int>p_array[3];//array of pairs
    int a[]={1,2,3};
    int b[]={4,5,6};
    p_array[0]={1,4};
    p_array[1]={2,5};
    p_array[2]={3,6};
    
    cout<<endl;
    for(auto i:p_array){
            cout<<i.first<<" "<<i.second;
            
            cout<<endl;
        }
        vector<pair<int,int>>pair_vector(5,{0,0});

}