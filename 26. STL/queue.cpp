//first in first out
#include<queue>
#include<iostream>
using namespace std;
int main(){
    queue<string>q;
    q.push("ambuj");
    q.push("chaurasia");
    cout<<q.front(); //ambuj
    q.pop();
    cout<<q.front();//chaurasia
    cout<<q.size();//1
    

}