#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,4334,545,3,333,3,3,3,3,56,563,35,56,4,5};
    int min = *min_element(v.begin(),v.end());
    auto max = max_element(v.begin(),v.end());
    cout<<"min ->"<<min<<" max ->"<<*max<<endl;
    cout<<count(v.begin(),v.end(),3)<<endl;
    cout<<*find(v.begin(),v.end(),3)<<endl;//return first iterator of 3  (3) 3rd index
      reverse(v.begin(),v.end());
      for(auto i:v){
        cout<<i<<" ";
      }


    return 0;

}
/*
min_element();//return pointer or iterator
max_element();
count();
find();
reverse();
array-> pointer
*/