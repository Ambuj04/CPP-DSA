//by marriage plate system
//last in first out
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string>s;
    s.push("love");
    s.push("ambuj");;
    cout<<s.top();
    s.pop();//remove top element
    cout<<s.top();
    cout<<s.size();
    cout<<s.empty();
}