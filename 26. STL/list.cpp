//list by doubly linklist
//no direct access
#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l;
    list<int>n(5,100);
    list<int>m(n);//n copy to m
    for(int i:m){
        cout<<i<<" ";//100 100 100 100 100
    }
    l.push_back(1);
    l.push_front(2);
    for(auto i:l){
        cout<<i<<" ";
    }
    //erase O(n)
    l.erase(l.begin());//delete first element
    cout<<l.size();
}