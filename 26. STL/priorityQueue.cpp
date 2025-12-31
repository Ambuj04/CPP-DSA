#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int>p;//maxHeap   bhr niklega greatest
    priority_queue<int,vector<int>,greater<int>>mini;//min heap

    p.push(1);
    p.push(2);
    p.push(5);
    mini.push(1);
    mini.push(2);
    mini.push(5);
    cout<<p.top();
    cout<<mini.top();
    p.pop();
    mini.pop();
     cout<<p.top();
    cout<<mini.top();
    cout<<p.size();
    cout<<q.size();

    //p   5 2 1
    //mini 1 2 5
}