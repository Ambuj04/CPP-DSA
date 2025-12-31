#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(7);
    v.push_back(4);
    v.push_back(3);
    v.push_back(9);

   sort(v.begin(),v.end());
    cout<<binary_search(v.begin(),v.end(),9);//1 (present)

auto it = lower_bound(v.begin(),v.end(),4);
cout<<(*it);

    cout<<lower_bound(v.begin(),v.end(),9)-v.begin();//1 (present)
    cout<<upper_bound(v.begin(),v.end(),9)-v.begin();//1 (present)
    cout<<max(1,2);//2
    cout<<min(1,2);//1
    int a = 5;
    int b = 10;
    swap(a,b);
    string str = "ambuj";
    reverse(str.begin(),str.end());
cout<<str;
rotate(v.begin(),v.begin()+1,v.end());//begin middle end
sort(v.begin(),v.end());//introsort
}